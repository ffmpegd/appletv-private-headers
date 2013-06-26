/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <UIKit/UIViewController.h>
#import "SBFWallpaperViewLegibilityObserver.h"
#import "SBFLockScreenDateFormatter.h"
#import "SBFLegibilitySettingsProvider.h"
#import "SpringBoardFoundation-Structs.h"

@class _UILegibilitySettings, NSTimer, UIImage, NSDictionary;
@protocol SBFLegibilitySettingsProviderDelegate;

@interface SBFWallpaperPreviewViewController : UIViewController <SBFWallpaperViewLegibilityObserver, SBFLockScreenDateFormatter, SBFLegibilitySettingsProvider> {
	NSTimer *_dateTimer;	// 304 = 0x130
	id<SBFLegibilitySettingsProviderDelegate> _delegate;	// 308 = 0x134
	UIImage *_wallpaperImage;	// 312 = 0x138
	NSDictionary *_proceduralWallpaper;	// 316 = 0x13c
	NSDictionary *_proceduralWallpaperOptions;	// 320 = 0x140
	BOOL _colorSamplingEnabled;	// 324 = 0x144
}
@property(assign, nonatomic) BOOL colorSamplingEnabled;	// G=0x32751c9d; S=0x32751cc5; 
@property(assign, nonatomic) id<SBFLegibilitySettingsProviderDelegate> delegate;	// G=0x327523a9; S=0x327523b9; @synthesize=_delegate
@property(readonly, assign, nonatomic) _UILegibilitySettings *legibilitySettings;	// G=0x32751ec9; 
- (id)initWithColorSamplingEnabled:(BOOL)colorSamplingEnabled;	// 0x327518c1
- (id)initWithImage:(id)image;	// 0x32751865
- (id)initWithMagicWallpaper:(id)magicWallpaper options:(id)options;	// 0x32751909
- (id)_backdropWallpaperView;	// 0x32751f41
- (id)_dateView;	// 0x32752259
- (id)_previewView;	// 0x32752221
- (id)_proceduralWallpaperViewWithFrame:(CGRect)frame;	// 0x327520d5
- (void)_startDateTimer;	// 0x32752341
- (void)_stopDateTimer;	// 0x32752305
- (void)_updateDateView;	// 0x32752281
- (id)_wallpaperView;	// 0x32752231
- (id)_wallpaperViewWithFrame:(CGRect)frame;	// 0x32751f95
// declared property getter: - (BOOL)colorSamplingEnabled;	// 0x32751c9d
- (void)dealloc;	// 0x32751989
// declared property getter: - (id)delegate;	// 0x327523a9
- (id)formatDateAsDayOfWeekMonthDayStyle:(id)weekMonthDayStyle;	// 0x32751df5
- (id)formatDateAsTimeNoAMPM:(id)ampm;	// 0x32751cf1
// declared property getter: - (id)legibilitySettings;	// 0x32751ec9
- (void)loadView;	// 0x32751a15
- (void)resetFormattersIfNecessary;	// 0x32751ec5
// declared property setter: - (void)setColorSamplingEnabled:(BOOL)enabled;	// 0x32751cc5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x327523b9
- (void)updateLegibilitySettingsForAverageColor:(id)averageColor;	// 0x32751c71
- (void)viewWillAppear:(BOOL)view;	// 0x32751ba9
- (void)viewWillDisappear:(BOOL)view;	// 0x32751c0d
- (void)wallpaperView:(id)view legibilitySettingsDidChange:(id)legibilitySettings;	// 0x32751ef1
@end
