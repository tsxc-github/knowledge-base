#include <bits/stdc++.h>
using namespace std;
#define LL long long
namespace DEBUG
{
    void Error(string errorInformatoin)
    {
        cout << endl
             << "ERROR!" << endl
             << errorInformatoin << endl;
        exit(114514);
    }
}

LL n;

struct Player // 每个玩家
{

    // TODO:添加构造函数

    struct Role // 每个角色
    {
        Role(LL n)
        {
            Init(n);
        }
        struct BasicProperty // 角色的基础属性(见【基础参数】条目)
        {
            LL HP;  // 最大生命值
            LL MP;  // 最大能量值
            LL atk; // 基础攻击力
            LL def; // 基础防御力

            LL *attackOrder = NULL; // 攻击顺序

            struct Talent // 角色天赋(见【天赋】条目)
            {
                const LL TalentNumber = 6; // 天赋总数
                LL possessedTalent;        // 被拥有的天赋

                // 附加参数
                LL x;
                LL y;
                void ImportData() // 输入数据(见【输入格式】条目)
                {
                    // 输入第三行
                    cin >> possessedTalent;
                    cin >> x;
                    cin >> y;
                }

                bool CheckTalent(LL checkTalent) // 检查是否拥有checkTalent的天赋
                {
                    if (checkTalent == possessedTalent)
                        return true;
                    else
                        return false;
                    DEBUG::Error("Impossible error"); // 不可能的错误
                }
            } talent;

            struct Skill // 角色技能(见【技能】条目)
            {
                const LL SkillNumber = 11; // 技能总数
                LL possessedSkill;         // 被拥有的技能
                // 附加参数
                LL x;
                LL y;
                LL z;
                void ImportData() // 输入数据(见【输入格式】条目)
                {
                    // 输入第四行
                    cin >> possessedSkill;
                    cin >> x;
                    cin >> y;
                    cin >> z;
                }

                bool CheckSkill(LL checkSkill) // 检查是否拥有checkTalent的天赋
                {
                    if (checkSkill == possessedSkill)
                        return true;
                    else
                        return false;
                    DEBUG::Error("Impossible error"); // 不可能的错误
                }
            } skill;

            void ImportData() // 输入数据(见【输入格式】条目)
            {
                // 输入第一行(基础信息)
                cin >> HP;
                cin >> MP;
                cin >> atk;
                cin >> def;

                // 输入第二行(攻击顺序)
                attackOrder = new LL[n]; // 初始化
                for (LL i = 0; i < n; i++)
                    cin >> attackOrder[i]; // 循环输入

                // 输入第三行(天赋信息)
                talent.ImportData(); // 调用输入函数

                // 输入第四行(技能信息)
                skill.ImportData(); // 调用输入函数
            }
        } basicProperty;

        struct CurrentState // 角色的当前状态(见【基础参数】条目)
        {
            LL hp; // 生命值
            LL mp; // 能量值

            // 初始化(见【基础参数】条目)
            LL deltaAtk = 0;    // 攻击力增益
            LL deltaDef = 0;    // 防御力增益
            bool death = false; // 是否死亡

        } currentState;

        struct Attack // 攻击相关
        {
            // TODO:添加攻击相关代码
        };

        void Init(LL n) // 初始化(见【基础参数】条目)
        {
            // 输入数据
            ImportData();

            // 初始化当前状态
            this->currentState.hp = this->basicProperty.HP;
            this->currentState.mp = this->basicProperty.MP;
        }

        void ImportData() // 输入角色数据(见【输入格式】条目)
        {
            // 输入基本数据
            this->basicProperty.ImportData(); // 调用输入函数
        }

        void DeathVerdict() // 死亡判定(见【死亡判定】条目)
        {
            if (this->currentState.hp <= 0) // 当hp达到0判定成功
            {
                this->currentState.death = true;
            }
        }

        void CheckOverflow() // 溢出数值回到最大值(见【参数溢出】条目)
        {
            // 选取较小数值
            this->currentState.hp = min(this->currentState.hp, this->basicProperty.HP);
            this->currentState.mp = min(this->currentState.mp, this->basicProperty.MP);
        }

        void Addhp(LL hp)//增加生命值(真实)
        {
            currentState.hp+=hp;
            CheckOverflow();//检查溢出
            DeathVerdict();//检查死亡
        }
        void Addmp(LL mp)//增加能量值(真实)
        {
            currentState.mp+=mp;
            CheckOverflow();//检查溢出
        }
    };
};
int main() // 主函数
{
    cin >> n;
}