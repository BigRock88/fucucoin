// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2022 The Fucu Coin Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef FUCU_CORE_NEW_GUI_PRUNNABLE_H
#define FUCU_CORE_NEW_GUI_PRUNNABLE_H

class Runnable {
public:
    virtual void run(int type) = 0;
    virtual void onError(QString error, int type) = 0;
};

#endif //FUCU_CORE_NEW_GUI_PRUNNABLE_H