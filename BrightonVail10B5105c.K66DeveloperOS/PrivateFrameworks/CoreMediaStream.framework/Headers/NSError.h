/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSError.h> // Unknown library


@interface NSError (MSErrorUtilities)
+ (id)MSErrorWithDomain:(id)domain code:(int)code description:(id)description;	// 0x37c65fa5
+ (id)MSErrorWithDomain:(id)domain code:(int)code description:(id)description suggestion:(id)suggestion;	// 0x37c65ff1
+ (id)MSErrorWithDomain:(id)domain code:(int)code description:(id)description underlyingError:(id)error;	// 0x37c660b1
+ (id)MSErrorWithDomain:(id)domain code:(int)code description:(id)description underlyingError:(id)error additionalUserInfo:(id)info;	// 0x37c66115
- (BOOL)MSASStateMachineIsCanceledError;	// 0x37c66c3d
- (BOOL)MSCanBeIgnored;	// 0x37c66c65
- (BOOL)MSContainsErrorWithDomain:(id)domain code:(int)code;	// 0x37c6771d
- (id)MSFindPrimaryError;	// 0x37c665ed
- (BOOL)MSIsAuthError;	// 0x37c67301
- (BOOL)MSIsBadTokenError;	// 0x37c67519
- (BOOL)MSIsCounted;	// 0x37c66ead
- (BOOL)MSIsFatal;	// 0x37c670b5
- (BOOL)MSIsQuotaError;	// 0x37c67911
- (BOOL)MSIsTemporaryNetworkError;	// 0x37c66945
- (id)MSMMCSRetryAfterDate;	// 0x37c67a71
- (id)MSMakePrimaryError;	// 0x37c664ed
- (BOOL)MSNeedsBackoff;	// 0x37c66c8d
- (id)MSVerboseDescription;	// 0x37c664d9
- (void)_MSApplyBlock:(id)block;	// 0x37c66749
- (id)_MSVerboseDescriptionRecursionCount:(int)count;	// 0x37c662a1
@end

@interface NSError (MMCSKit)
+ (id)MMCSErrorWithDomain:(id)domain code:(int)code description:(id)description;	// 0x37cc8341
- (int)MMCSErrorType;	// 0x37cc84d5
- (BOOL)MMCSIsAuthorizationError;	// 0x37cc8bc9
- (BOOL)MMCSIsCancelError;	// 0x37cc8739
- (BOOL)MMCSIsFatalError;	// 0x37cc8d7d
- (BOOL)MMCSIsNetworkConditionsError;	// 0x37cc88e9
- (id)MMCSRetryAfterDate;	// 0x37cc8f55
- (void)_MMCSApplyBlock:(id)block;	// 0x37cc8535
@end

