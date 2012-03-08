/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSArray;

@interface ASResolveRecipientsTask : ASTask {
	NSArray *_emailAddresses;	// 104 = 0x68
}
- (id)initWithEmailAddresses:(id)emailAddresses;	// 0x31e10f05
- (int)certStatusForExchangeStatus:(int)exchangeStatus;	// 0x31e11c8d
- (int)commandCode;	// 0x31e10fa5
- (void)dealloc;	// 0x31e10f59
- (void)finishWithError:(id)error;	// 0x31e11581
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x31e1111d
- (BOOL)processContext:(id)context;	// 0x31e11131
- (id)requestBody;	// 0x31e10fa9
- (int)responseStatusForExchangeStatus:(int)exchangeStatus;	// 0x31e11c79
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x31e11c61
@end
