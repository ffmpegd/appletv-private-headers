/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSString;

@interface ASFolderSyncTask : ASTask {
	NSString *_previousSyncKey;	// 104 = 0x68
	int _numDownloadedElements;	// 108 = 0x6c
}
@property(readonly, assign) int numDownloadedElements;	// G=0x31df50ad; converted property
- (id)initWithPreviousSyncKey:(id)previousSyncKey;	// 0x31df4789
- (int)commandCode;	// 0x31df47dd
- (void)dealloc;	// 0x31df4fc9
- (void)finishWithError:(id)error;	// 0x31df4d0d
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x31df48a9
// converted property getter: - (int)numDownloadedElements;	// 0x31df50ad
- (BOOL)processContext:(id)context;	// 0x31df48bd
- (id)requestBody;	// 0x31df47e1
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x31df5015
@end
