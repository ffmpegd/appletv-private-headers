/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableSet;

@interface MPVolumeHUDController : NSObject {
	NSMutableArray *_contexts;	// 4 = 0x4
	NSMutableSet *_categories;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) id mainContext;	// G=0x337b4205; 
+ (id)sharedInstance;	// 0x337b4321
- (id)init;	// 0x337b4285
- (BOOL)_sliderIsVisible:(id)visible;	// 0x337b3f81
- (void)_updateVisibility;	// 0x337b4365
- (void)dealloc;	// 0x337b4229
// declared property getter: - (id)mainContext;	// 0x337b4205
- (void)popContext;	// 0x337b40f5
- (id)pushContext;	// 0x337b41b5
- (void)registerView:(id)view inContext:(id)context;	// 0x337b4089
- (void)setNeedsUpdate;	// 0x337b4009
- (void)unregisterView:(id)view inContext:(id)context;	// 0x337b4061
@end

