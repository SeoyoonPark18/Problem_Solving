#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	//1 loop
	string answer = "";

	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());
	completion.push_back("");

	for (int i = 0; i < participant.size(); i++) {
		if (participant[i] != completion[i])
			return participant[i];
	}

	return answer;
}

/*
	map<string, int> m_p;

	for (int i = 0; i < participant.size(); i++) {
		string name = participant[i];
		if (m.find(name) != m.end()) {
			m[name]++;
		}
		else {
			m.insert({ name, 1 });
		}
	}

	for (int i = 0; i < completion.size(); i++) {
		string name = completion[i];
		if (m.find(name) != m.end()) {
			if (m[name] == 1) m.erase(name);
			else
				m[name]--;
		}
	}

	return m.begin()->first;
*/