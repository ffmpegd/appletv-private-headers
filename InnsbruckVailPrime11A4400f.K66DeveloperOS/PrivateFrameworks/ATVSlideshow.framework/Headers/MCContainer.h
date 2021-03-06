/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSDictionary, MCAudioPlaylist, MCPlug;

@interface MCContainer : MCObject {
	unsigned short mFlags;	// 12 = 0xc
	unsigned short mSpecialRetainCount;	// 14 = 0xe
	MCAudioPlaylist *mAudioPlaylist;	// 16 = 0x10
	NSDictionary *mInitialState;	// 20 = 0x14
	MCPlug *mReferencingPlug;	// 24 = 0x18
}
@property(readonly, assign) MCAudioPlaylist *audioPlaylist;	// G=0x2fcc35d5; @synthesize=mAudioPlaylist
@property(readonly, assign) MCAudioPlaylist *audioPlaylistCreateIfNeeded;	// G=0x2fcc327d; 
@property(retain) NSDictionary *initialState;	// G=0x2fcc35e9; S=0x2fcc35fd; @synthesize=mInitialState
@property(readonly, assign) MCPlug *referencingPlug;	// G=0x2fcc360d; @synthesize=mReferencingPlug
- (id)init;	// 0x2fcc2fb9
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x2fcc3011
// declared property getter: - (id)audioPlaylist;	// 0x2fcc35d5
// declared property getter: - (id)audioPlaylistCreateIfNeeded;	// 0x2fcc327d
- (void)dealloc;	// 0x2fcc2fe5
- (void)demolish;	// 0x2fcc3119
- (id)imprint;	// 0x2fcc31e9
// declared property getter: - (id)initialState;	// 0x2fcc35e9
- (void)referenceByPlug:(id)plug;	// 0x2fcc33f1
// declared property getter: - (id)referencingPlug;	// 0x2fcc360d
// declared property setter: - (void)setInitialState:(id)state;	// 0x2fcc35fd
- (void)specialRelease;	// 0x2fcc3559
- (id)specialRetain;	// 0x2fcc348d
- (void)unreferenceByPlug:(id)plug;	// 0x2fcc3419
@end

