#include "transactions/Transaction.h"

namespace stellar
{
    class CancelOfferTx : public Transaction
    {
        
    public:
        void doApply(TxDelta& delta, LedgerMaster& ledgerMaster);
        bool doCheckValid(LedgerMaster& ledgerMaster);
    };
}