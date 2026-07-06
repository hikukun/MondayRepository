#pragma once

/// <summary>
/// 回復関数
/// </summary>
/// <param name="hp"></param>
void Heal(int& hp);
/// <summary>
/// 入力チェック
/// </summary>
/// <param name="Player"></param>
/// <returns></returns>
int InputCheck(int max,int min,int& Player);
/// <summary>
/// 侵攻関数
/// </summary>
void run();