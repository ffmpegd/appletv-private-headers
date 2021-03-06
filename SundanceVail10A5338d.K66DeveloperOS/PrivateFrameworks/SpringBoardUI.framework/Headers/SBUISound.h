/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

@interface SBUISound : NSObject {
	int _soundType;	// 4 = 0x4
	unsigned long _systemSoundID;	// 8 = 0x8
	unsigned _soundBehavior;	// 12 = 0xc
	NSString *_ringtoneName;	// 16 = 0x10
	NSDictionary *_vibrationPattern;	// 20 = 0x14
	NSString *_audioCategory;	// 24 = 0x18
	BOOL _repeats;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *audioCategory;	// G=0x330983b5; S=0x330983c5; @synthesize=_audioCategory
@property(assign, nonatomic, getter=isRepeating) BOOL repeats;	// G=0x33098375; S=0x33098385; @synthesize=_repeats
@property(retain, nonatomic) NSString *ringtoneName;	// G=0x33098355; S=0x33098365; @synthesize=_ringtoneName
@property(assign, nonatomic) unsigned soundBehavior;	// G=0x33098395; S=0x330983a5; @synthesize=_soundBehavior
@property(assign, nonatomic) int soundType;	// G=0x330982f5; S=0x33098305; @synthesize=_soundType
@property(assign, nonatomic) unsigned long systemSoundID;	// G=0x33098315; S=0x33098325; @synthesize=_systemSoundID
@property(retain, nonatomic) NSDictionary *vibrationPattern;	// G=0x33098335; S=0x33098345; @synthesize=_vibrationPattern
+ (id)alertSoundWithSystemSoundID:(unsigned long)systemSoundID;	// 0x33097e99
- (id)initWithRingtone:(id)ringtone vibrationPattern:(id)pattern repeats:(BOOL)repeats audioCategory:(id)category;	// 0x33097f91
- (id)initWithSystemSoundID:(unsigned long)systemSoundID behavior:(unsigned)behavior;	// 0x33097ed9
- (id)initWithSystemSoundID:(unsigned long)systemSoundID behavior:(unsigned)behavior vibrationPattern:(id)pattern;	// 0x33097efd
// declared property getter: - (id)audioCategory;	// 0x330983b5
- (void)dealloc;	// 0x3309803d
- (id)description;	// 0x33098171
- (BOOL)isPlaying;	// 0x330980a9
// declared property getter: - (BOOL)isRepeating;	// 0x33098375
- (BOOL)play;	// 0x330980e1
- (BOOL)playWithCompletionHandler:(id)completionHandler;	// 0x330980f9
// declared property getter: - (id)ringtoneName;	// 0x33098355
// declared property setter: - (void)setAudioCategory:(id)category;	// 0x330983c5
// declared property setter: - (void)setRepeats:(BOOL)repeats;	// 0x33098385
// declared property setter: - (void)setRingtoneName:(id)name;	// 0x33098365
// declared property setter: - (void)setSoundBehavior:(unsigned)behavior;	// 0x330983a5
// declared property setter: - (void)setSoundType:(int)type;	// 0x33098305
// declared property setter: - (void)setSystemSoundID:(unsigned long)anId;	// 0x33098325
// declared property setter: - (void)setVibrationPattern:(id)pattern;	// 0x33098345
// declared property getter: - (unsigned)soundBehavior;	// 0x33098395
// declared property getter: - (int)soundType;	// 0x330982f5
- (void)stop;	// 0x33098135
// declared property getter: - (unsigned long)systemSoundID;	// 0x33098315
// declared property getter: - (id)vibrationPattern;	// 0x33098335
@end

