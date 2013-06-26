/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import </libobjc.A.h>

@class NSMutableDictionary, TLAccessQueue;

@interface TLAlertController : NSObject {
	NSMutableDictionary *_alertsBySoundIDs;	// 4 = 0x4
	TLAccessQueue *_alertsBySoundIDsAccessQueue;	// 8 = 0x8
}
@property(retain, nonatomic, setter=_setAlertsBySoundIDs:) NSMutableDictionary *_alertsBySoundIDs;	// G=0x32c052c9; S=0x32c052d9; @synthesize
@property(retain, setter=_setAlertsBySoundIDsAccessQueue:) TLAccessQueue *_alertsBySoundIDsAccessQueue;	// G=0x32c052e9; S=0x32c052fd; @synthesize
@property(readonly, assign, nonatomic) BOOL _hasVibratorCapability;	// G=0x32c052b5; 
+ (id)sharedAlertController;	// 0x32c042b9
- (id)init;	// 0x32c0434d
// declared property getter: - (id)_alertsBySoundIDs;	// 0x32c052c9
// declared property getter: - (id)_alertsBySoundIDsAccessQueue;	// 0x32c052e9
// declared property getter: - (BOOL)_hasVibratorCapability;	// 0x32c052b5
- (BOOL)_playAlert:(id)alert completionHandler:(id)handler targetQueue:(id)queue;	// 0x32c047a9
- (void)_removeSoundID:(unsigned long)anId shouldStopSound:(BOOL)sound fireCompletionHandler:(BOOL)handler;	// 0x32c050b9
// declared property setter: - (void)_setAlertsBySoundIDs:(id)ids;	// 0x32c052d9
// declared property setter: - (void)_setAlertsBySoundIDsAccessQueue:(id)queue;	// 0x32c052fd
- (unsigned long)_soundIDForAlert:(id)alert;	// 0x32c04d49
- (void)_stopAlert:(id)alert;	// 0x32c04bf1
- (BOOL)_stopAllAlerts;	// 0x32c04e21
- (void)_systemSoundDidFinishPlaying:(unsigned long)_systemSound;	// 0x32c05211
- (void)dealloc;	// 0x32c04475
- (BOOL)stopAllAlerts;	// 0x32c046dd
@end
