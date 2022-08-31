//
//  DPCError.h
//  DapiConnect
//
//  Created by Mohammed Ennabah on 06/04/2020.
//  Copyright © 2020 Dapi. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSErrorDomain const _Nonnull DPCErrorDomain;

typedef NS_ERROR_ENUM(DPCErrorDomain, DPCError) {
    DPCLocalStoreError = 1000,
    DPCInvalidUserID = 1001,
    DPCAPIError = 1002,
    DPCUICancelError = 1003,
    
    DPCInvalidCredentialsError = 2000,
    DPCUserDelinkedError = 2001,
    DPCUnknownError = 2002,
    DPCCooldownPeriodError = 2003,
    DPCUserAlreadyLoggedInError = 2004,
    DPCInsufficientFundError = 2005,
    DPCBeneficiaryNotActivatedError = 2006,
    DPCSessionExpiredError = 2007,
    DPCAccountLockedError = 2008,
    DPCBeneficiaryCoolDownPeriod = 2009,
    DPCInsufficientBalanceError = 2010,
    DPCSessionInvalidated = 2011,
    DPCTransferMissingBeneficiary = 2012,
    
    DPCValidationMissingAddressLine1 = 3001,
    DPCValidationMissingAddressLine2 = 3002,
    DPCValidationMissingAddressLine3 = 3003,
    DPCValidationMissingBranchAddress = 3004,
    DPCValidationMissingBranchName = 3005,
    DPCValidationMissingConnection = 3006,
    DPCValidationMissingCountry = 3007,
    DPCValidationMissingName = 3008,
    DPCValidationMissingNickname = 3009,
    DPCValidationMissingPhoneNumber = 3010,
    DPCValidationMissingSortCode = 3011,
    DPCValidationMissingSwiftCode = 3012,
};
