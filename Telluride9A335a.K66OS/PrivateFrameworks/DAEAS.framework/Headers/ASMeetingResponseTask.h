/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSArray;

@interface ASMeetingResponseTask : ASTask {
	NSArray *_responseItems;	// 104 = 0x68
}
@property(readonly, assign) NSArray *responseItems;	// G=0x321883bd; @synthesize=_responseItems
- (id)initWithResponseItems:(id)responseItems;	// 0x32187745
- (int)commandCode;	// 0x321877e5
- (void)dealloc;	// 0x32187799
- (void)finishWithError:(id)error;	// 0x32187e0d
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x321879a9
- (BOOL)processContext:(id)context;	// 0x321879bd
- (id)requestBody;	// 0x321877e9
// declared property getter: - (id)responseItems;	// 0x321883bd
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x32188341
@end

