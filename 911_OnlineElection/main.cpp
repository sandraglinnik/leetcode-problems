#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <map>

struct Vote {
    Vote(int a, int b) : candidate_id(a), time(b) {}

    int candidate_id;
    int time;
};

struct Candidate {
    int id;
    int votes;
    int last_vote;
};

bool operator<(const Candidate &a, const Candidate &b) {
    return a.votes > b.votes || (a.votes == b.votes && a.last_vote > b.last_vote);
}

bool operator<(const Vote &a, const Vote &b) {
    return a.time < b.time;
}

class TopVotedCandidate {
public:
    TopVotedCandidate(std::vector<int>& persons, std::vector<int>& times);

    int q(int t);

private:
    std::map<int, int> leaders;
};

TopVotedCandidate::TopVotedCandidate(std::vector<int> &persons, std::vector<int> &times) {
    std::vector<Vote> votes;
    int n = persons.size();
    votes.reserve(n);
    for (int i = 0; i < n; ++i) {
        votes.emplace_back(persons[i], times[i]);
    }
    std::sort(votes.begin(), votes.end());

    std::set<Candidate> stat;
    std::unordered_map<int, Candidate> status;


    for (auto &vote : votes) {
        if (status.count(vote.candidate_id)) {
            stat.erase(status[vote.candidate_id]);
            ++status[vote.candidate_id].votes;
            status[vote.candidate_id].last_vote = vote.time;
        } else {
            status[vote.candidate_id] = {vote.candidate_id, 1, vote.time};
        }
        stat.insert(status[vote.candidate_id]);
        leaders[vote.time] = stat.begin()->id;
    }
}

int TopVotedCandidate::q(int t) {
    auto prev_event = leaders.upper_bound(t);
    --prev_event;
    return prev_event->second;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
