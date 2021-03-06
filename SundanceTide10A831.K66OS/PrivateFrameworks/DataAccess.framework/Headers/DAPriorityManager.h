/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library
#import "DataAccess-Structs.h"


@interface DAPriorityManager : NSObject {
	CFDictionaryRef _clientsToPriorityRequests;	// 4 = 0x4
	int _foregroundDataclasses;	// 8 = 0x8
	int _currentPriority;	// 12 = 0xc
}
@property(readonly, assign) CFDictionaryRef clientsToPriorityRequests;	// G=0x32192401; @synthesize=_clientsToPriorityRequests
@property(readonly, assign) int currentPriority;	// G=0x32192415; @synthesize=_currentPriority
+ (id)sharedManager;	// 0x321912c9
+ (void)vendPriorityManagers;	// 0x321912b9
- (id)init;	// 0x321915a5
- (void)_SBApplicationStateChanged:(id)changed;	// 0x32191485
- (id)_appIDsToDataclasses;	// 0x32191349
- (int)_recalculatePriority;	// 0x32191ba5
- (void)_setForegroundDataclasses:(int)dataclasses;	// 0x32191911
- (void)_setNewPriority;	// 0x32191da1
- (void)bumpDataclassesToUIPriority:(int)uipriority;	// 0x32192229
// declared property getter: - (CFDictionaryRef)clientsToPriorityRequests;	// 0x32192401
// declared property getter: - (int)currentPriority;	// 0x32192415
- (void)dealloc;	// 0x32191855
- (void)requestPriority:(int)priority forClient:(id)client dataclasses:(int)dataclasses;	// 0x32191e15
- (id)stateString;	// 0x32191921
@end

