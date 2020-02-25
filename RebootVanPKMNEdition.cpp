#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int SpeciesNo;
    int IsFemale = 0;
    string ModelPath;
    string ConfigPath;
    string ArchivePath;
    string BattleAnimPath;
    string CampAnimPath;
    string FieldAnimPath;
    string tp;
    unsigned int nooflines;
    int CurLine;
    unsigned int LineToEnd;
    ifstream TheFile("poke_resource_table.json");
    ofstream TheFile2("out/poke_resource_table.json");
    cout << "\nPut in the National Dex number\n";
    cin >> SpeciesNo;
    cout << "\nPut in the number of the last line of the entry before the one you're adding minus one.\nThere are six lines before the entries\n and 22 lines for non-lgpe entries where all three of the following things aren't true.\nIf it's female, if it's an alt form or if it's a shiny.\nAdd one line for every one of those that's true.\nSubtract four lines for an lgpe entry.\n";
    cin >> nooflines;
    for (int i = 0; i <= nooflines; i++)
    {
        getline(TheFile, tp, '\n');
        TheFile2 << tp << "\n";
    }
    cout << "\nPut in the model path minus the bin/pokemon/\n";
    cin >> ModelPath;
    cout << "\nNow put in the config path minus the bin/pokemon/\n";
    cin >> ConfigPath;
    cout << "\nNow time for, not the path of the .gfpak, but just the name\n";
    cin >> ArchivePath;
    cout << "\nNow put in the path to the .gfbanmcfg for battle anims minus the bin/pokemon/\n";
    cin >> BattleAnimPath;
    cout << "\nTime for the path to the .gfbanmcfg for camp anims minus the bin/pokemon/\n";
    cin >> CampAnimPath;
    cout << "\nNow time for the .gfbanmcfg for field anims minus the bin/pokemon/\n";
    cin >> FieldAnimPath;
    cout << "\nAre you working with a female?\n(1 = yes.  2 = no.)\n";
    cin >> IsFemale;
    if (IsFemale == 1)    
    {
        int IsShiny = 0;
        cout << "\nAre you working with a shiny?(1 = yes.  2 = no.)\n";
        cin >> IsShiny;
        if (IsShiny == 1)
        {
            int IsLGPE = 0;
            cout << "\nLast but not least, are you working with an LGPE .gfpak?(1 = yes.  2 = no.)\n";
            cin >> IsLGPE;
            if (IsLGPE == 1)
            {
                TheFile2 << "\n    {\n      Metadata: {\n        Species: " << SpeciesNo << ",\n        Gender: \"Female\",\n        Shiny: true\n      },\n      ModelPath: \"bin/pokemon/" << ModelPath << "\",\n      ConfigPath: \"bin/pokemon/" << ConfigPath << "\",\n      ArchivePath: \"bin/archive/pokemon/" << ArchivePath << "\",\n      Animations: [\n        {\n          Name: \"battle\",\n          Path: \"bin/pokemon/" << BattleAnimPath << "\"\n        },\n        {\n          Name: \"field\",\n          Path: \"bin/pokemon/" << FieldAnimPath << "\"\n        }\n      ]\n    },\n";
                while (!TheFile.eof())
                {
                    getline(TheFile, tp, '\n');
                    TheFile2 << tp << "\n";
                }
                TheFile.close();
                TheFile2.close();
                cout << "\nDone! Now have a fun day!\n";
            }
            if (IsLGPE == 2)
            {
                TheFile2 << "\n    {\n      Metadata: {\n        Species: " << SpeciesNo << ",\n        Gender: \"Female\",\n        Shiny: true\n      },\n      ModelPath: \"bin/pokemon/" << ModelPath << "\",\n      ConfigPath: \"bin/pokemon/" << ConfigPath << "\",\n      ArchivePath: \"bin/archive/pokemon/" << ArchivePath << "\",\n      Animations: [\n        {\n          Name: \"battle\",\n          Path: \"bin/pokemon/" << BattleAnimPath << "\"\n        },\n        {\n          Name: \"camp\",\n          Path: \"bin/pokemon/" << CampAnimPath << "\"\n        },\n        {\n          Name: \"field\",\n          Path: \"bin/pokemon/" << FieldAnimPath << "\"\n        }\n      ]\n    },\n";
                while (!TheFile.eof())
                {
                    getline(TheFile, tp, '\n');
                    TheFile2 << tp << "\n";
                }
                TheFile.close();
                TheFile2.close();
                cout << "\nDone! Now have a fun day!\n";
            }
        }
        if (IsShiny == 2)
        {
            int IsLGPE = 0;
            cout << "\nLast but not least, are you working with an LGPE .gfpak?(1 = yes.  2 = no.)\n";
            cin >> IsLGPE;
            if (IsLGPE == 1)
            {
                TheFile2 << "    {\n      Metadata: {\n        Species: " << SpeciesNo << ",\n        Gender: \"Female\"\n      },\n      ModelPath: \"bin/pokemon/" << ModelPath << "\",\n      ConfigPath: \"bin/pokemon/" << ConfigPath << "\",\n      ArchivePath: \"bin/archive/pokemon/" << ArchivePath << "\",\n      Animations: [\n        {\n          Name: \"battle\",\n          Path: \"bin/pokemon/" << BattleAnimPath << "\"\n        },\n        {\n          Name: \"field\",\n          Path: \"bin/pokemon/" << FieldAnimPath << "\"\n        }\n      ]\n    },\n";
                while (!TheFile.eof())
                {
                    getline(TheFile, tp, '\n');
                    TheFile2 << tp << "\n";
                }
                TheFile.close();
                TheFile2.close();
                cout << "\nDone! Now have a fun day!\n";
            }
            if (IsLGPE == 2)
            {
                TheFile2 << "    {\n      Metadata: {\n        Species: " << SpeciesNo << ",\n        Gender: \"Female\"\n      },\n      ModelPath: \"bin/pokemon/" << ModelPath << "\",\n      ConfigPath: \"bin/pokemon/" << ConfigPath << "\",\n      ArchivePath: \"bin/archive/pokemon/" << ArchivePath << "\",\n      Animations: [\n        {\n          Name: \"battle\",\n          Path: \"bin/pokemon/" << BattleAnimPath << "\"\n        },\n        {\n          Name: \"field\",\n          Path: \"bin/pokemon/" << CampAnimPath << "\"\n        },\n        {\n          Name: \"field\",\n          Path: \"bin/pokemon/" << FieldAnimPath << "\"\n        }\n      ]\n    },\n";
                while (!TheFile.eof())
                {
                    getline(TheFile, tp, '\n');
                    TheFile2 << tp << "\n";
                }
                TheFile.close();
                TheFile2.close();
                cout << "\nDone! Now have a fun day!\n";
            }
        }
    }
    if (IsFemale == 2)
    {
        int IsShiny = 0;
        cout << "\nAre you working with a shiny?(1 = yes.  2 = no.)\n";
        cin >> IsShiny;
        if (IsShiny == 2)
        {
            int IsLGPE = 0;
            cout << "\nLast but not least, are you working with an LGPE .gfpak?(1 = yes.  2 = no.)\n";
            cin >> IsLGPE;
            if (IsLGPE == 1)
            {
                TheFile2 << "    {\n      Metadata: {\n        Species: " << SpeciesNo << "\n      },\n      ModelPath: \"bin/pokemon/" << ModelPath << "\",\n      ConfigPath: \"bin/pokemon/" << ConfigPath << "\",\n      ArchivePath: \"bin/archive/pokemon/" << ArchivePath << "\",\n      Animations: [\n        {\n          Name: \"battle\",\n          Path: \"bin/pokemon/" << BattleAnimPath << "\"\n        },\n        {\n          Name: \"field\",\n          Path: \"bin/pokemon/" << FieldAnimPath << "\"\n        }\n      ]\n    },\n";
                while (!TheFile.eof())
                {
                    getline(TheFile, tp, '\n');
                    TheFile2 << tp << "\n";
                }
                TheFile.close();
                TheFile2.close();
                cout << "\nDone! Now have a fun day!\n";
            }
            if (IsLGPE == 2)
            {
                TheFile2 << "    {\n      Metadata: {\n        Species: " << SpeciesNo << "\n      },\n      ModelPath: \"bin/pokemon/" << ModelPath << "\",\n      ConfigPath: \"bin/pokemon/" << ConfigPath << "\",\n      ArchivePath: \"bin/archive/pokemon/" << ArchivePath << "\",\n      Animations: [\n        {\n          Name: \"battle\",\n          Path: \"bin/pokemon/" << BattleAnimPath << "\"\n        },\n        {\n          Name: \"camp\",\n          Path: \"bin/pokemon/" << CampAnimPath << "\"\n        },\n        {\n          Name: \"field\",\n          Path: \"bin/pokemon/" << FieldAnimPath << "\"\n        }\n      ]\n    },\n";
                while (!TheFile.eof())
                {
                    getline(TheFile, tp, '\n');
                    TheFile2 << tp << "\n";
                }
                TheFile.close();
                TheFile2.close();
                cout << "\nDone! Now have a fun day!\n";
            }
        }
        if (IsShiny == 1)
        {
            int IsLGPE = 0;
            cout << "\nLast but not least, are you working with an LGPE .gfpak?(1 = yes.  2 = no.)\n";
            cin >> IsLGPE;
            if (IsLGPE = 1)
            {
                TheFile2 << "    {\n      Metadata: {\n        Species: " << SpeciesNo << ",\n        Shiny: true\n      },\n      ModelPath: \"bin/pokemon/" << ModelPath << "\",\n      ConfigPath: \"bin/pokemon/" << ConfigPath << "\",\n      ArchivePath: \"bin/archive/pokemon/" << ArchivePath << "\",\n      Animations: [\n        {\n          Name: \"battle\",\n          Path: \"bin/pokemon/" << BattleAnimPath << "\"\n        },\n        {\n          Name: \"field\",\n          Path: \"bin/pokemon/" << FieldAnimPath << "\"\n        }\n      ]\n    },\n";
                while (!TheFile.eof())
                {
                    getline(TheFile, tp, '\n');
                    TheFile2 << tp << "\n";
                }
                TheFile.close();
                TheFile2.close();
                cout << "\nDone! Now have a fun day!\n";
            }
            if (IsLGPE = 2)
            {
                TheFile2 << "    {\n      Metadata: {\n        Species: " << SpeciesNo << ",\n        Shiny: true\n      },\n      ModelPath: \"bin/pokemon/" << ModelPath << "\",\n      ConfigPath: \"bin/pokemon/" << ConfigPath << "\",\n      ArchivePath: \"bin/archive/pokemon/" << ArchivePath << "\",\n      Animations: [\n        {\n          Name: \"battle\",\n          Path: \"bin/pokemon/" << BattleAnimPath << "\"\n        },\n        {\n          Name: \"camp\",\n          Path: \"bin/pokemon/" << CampAnimPath << "\"\n        },\n        {\n          Name: \"field\",\n          Path: \"bin/pokemon/" << FieldAnimPath << "\"\n        }\n      ]\n    },\n";
                while (!TheFile.eof())
                {
                    getline(TheFile, tp, '\n');
                    TheFile2 << tp << "\n";
                }
                TheFile.close();
                TheFile2.close();
                cout << "\nDone! Now have a fun day!\n";
            }
        }
    }
    return 0;
}