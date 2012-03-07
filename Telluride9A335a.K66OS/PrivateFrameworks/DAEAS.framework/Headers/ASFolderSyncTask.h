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
@property(readonly, assign) int numDownloadedElements;	// G=0x321c9129; converted property
- (id)initWithPreviousSyncKey:(id)previousSyncKey;	// 0x321c8805
- (int)commandCode;	// 0x321c8859
- (void)dealloc;	// 0x321c9045
- (void)finishWithError:(id)error;	// 0x321c8d89
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x321c8925
// converted property getter: - (int)numDownloadedElements;	// 0x321c9129
- (BOOL)processContext:(id)context;	// 0x321c8939
- (id)requestBody;	// 0x321c885d
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x321c9091
@end

