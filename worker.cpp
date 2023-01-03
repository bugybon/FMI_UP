#include <iostream>

struct Worker{
    char name[1024];
    double salary;
    Worker* boss = nullptr;
};

struct Team{
    char name[1024];
    Worker participants[100];
    int participantsCount;
};

struct Company{
    char name[1024];
    Team teams[50];
    int teamCount;
};

bool isParticipant(Worker& worker, Company& company){
    for(int j = 0; j < teamCount; j++){
        for(int i = 0; i < company.teams[j]->participantsCount; i++){
            if(company.teams[j]->participants[i] == worker){
                return true;
            }
        }
    }
    return false;
}

void highestRankedBoss(Worker& worker){
    if(worker.boss == nullptr){
        std :: cout << worker.name;
        return;
    }else{
        highestRankedBoss(worker.boss);
    }
}
