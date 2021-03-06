/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, NSHashTable, _UIBackdropViewSettings, NSMutableSet, UIColor, UIImage, NSMutableDictionary, CAFilter, _UIBackdropEffectView;
@protocol _UIBackdropViewObserver;

@interface _UIBackdropView : UIView {
	BOOL _autosizesToFitSuperview;	// 96 = 0x60
	BOOL _computesColorSettings;	// 97 = 0x61
	BOOL _appliesOutputSettingsAutomatically;	// 98 = 0x62
	BOOL _appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;	// 99 = 0x63
	BOOL _applyingBackdropChanges;	// 100 = 0x64
	BOOL _applyingTransition;	// 101 = 0x65
	BOOL _requiresTintViews;	// 102 = 0x66
	BOOL _wantsColorSettings;	// 103 = 0x67
	BOOL _blursBackground;	// 104 = 0x68
	BOOL _allowsColorSettingsSuppression;	// 105 = 0x69
	BOOL _applySettingsAfterLayout;	// 106 = 0x6a
	BOOL _updateMaskViewsForViewReentrancyGuard;	// 107 = 0x6b
	BOOL _simulatesMasks;	// 108 = 0x6c
	BOOL _backdropVisibilitySetOnce;	// 109 = 0x6d
	BOOL _blurRadiusSetOnce;	// 110 = 0x6e
	BOOL __backdropVisible;	// 111 = 0x6f
	BOOL __zoomsBack;	// 112 = 0x70
	int _style;	// 116 = 0x74
	NSHashTable *_observers;	// 120 = 0x78
	id<_UIBackdropViewObserver> _observer;	// 124 = 0x7c
	_UIBackdropViewSettings *_inputSettings;	// 128 = 0x80
	_UIBackdropViewSettings *_outputSettings;	// 132 = 0x84
	int _configuration;	// 136 = 0x88
	_UIBackdropEffectView *_backdropEffectView;	// 140 = 0x8c
	NSString *_groupName;	// 144 = 0x90
	UIImage *_filterMaskImage;	// 148 = 0x94
	UIView *_grayscaleTintView;	// 152 = 0x98
	UIImage *_grayscaleTintMaskImage;	// 156 = 0x9c
	UIView *_colorTintView;	// 160 = 0xa0
	UIImage *_colorTintMaskImage;	// 164 = 0xa4
	CAFilter *_gaussianBlurFilter;	// 168 = 0xa8
	CAFilter *_colorSaturateFilter;	// 172 = 0xac
	CAFilter *_tintFilter;	// 176 = 0xb0
	UIView *_contentView;	// 180 = 0xb4
	int _maskMode;	// 184 = 0xb8
	NSMutableSet *_partialMaskViews;	// 188 = 0xbc
	UIView *_grayscaleTintMaskViewContainer;	// 192 = 0xc0
	NSMutableDictionary *_grayscaleTintMaskViewMap;	// 196 = 0xc4
	UIView *_colorTintMaskViewContainer;	// 200 = 0xc8
	NSMutableDictionary *_colorTintMaskViewMap;	// 204 = 0xcc
	UIView *_filterMaskViewContainer;	// 208 = 0xd0
	NSMutableDictionary *_filterMaskViewMap;	// 212 = 0xd4
	id _computeAndApplySettingsNotificationObserver;	// 216 = 0xd8
	float _colorMatrixGrayscaleTintLevel;	// 220 = 0xdc
	float _colorMatrixGrayscaleTintAlpha;	// 224 = 0xe0
	UIColor *_colorMatrixColorTint;	// 228 = 0xe4
	float _colorMatrixColorTintAlpha;	// 232 = 0xe8
	int _blurHardEdges;	// 236 = 0xec
	CFRunLoopObserverRef _updateInputBoundsRunLoopObserver;	// 240 = 0xf0
	float _previousBackdropStatisticsRed;	// 244 = 0xf4
	float _previousBackdropStatisticsGreen;	// 248 = 0xf8
	float _previousBackdropStatisticsBlue;	// 252 = 0xfc
	float _previousBackdropStatisticsContrast;	// 256 = 0x100
	NSString *__blurQuality;	// 260 = 0x104
	float __blurRadius;	// 264 = 0x108
	float __saturationDeltaFactor;	// 268 = 0x10c
	double _appliesOutputSettingsAnimationDuration;	// 272 = 0x110
}
@property(assign, nonatomic) BOOL _backdropVisible;	// G=0x2f95a469; S=0x2f95a479; @synthesize=__backdropVisible
@property(copy, nonatomic) NSString *_blurQuality;	// G=0x2f95a405; S=0x2f95a419; @synthesize=__blurQuality
@property(assign, nonatomic) float _blurRadius;	// G=0x2f95a429; S=0x2f95a439; @synthesize=__blurRadius
@property(assign, nonatomic) float _saturationDeltaFactor;	// G=0x2f95a449; S=0x2f95a459; @synthesize=__saturationDeltaFactor
@property(assign, nonatomic, setter=setZoomsBack:) BOOL _zoomsBack;	// G=0x2f95a489; S=0x2f957fbd; @synthesize=__zoomsBack
@property(assign, nonatomic) BOOL allowsColorSettingsSuppression;	// G=0x2f959fd1; S=0x2f959fe1; @synthesize=_allowsColorSettingsSuppression
@property(assign, nonatomic) double appliesOutputSettingsAnimationDuration;	// G=0x2f959ec5; S=0x2f959edd; @synthesize=_appliesOutputSettingsAnimationDuration
@property(assign, nonatomic) BOOL appliesOutputSettingsAutomatically;	// G=0x2f959eb5; S=0x2f955d11; @synthesize=_appliesOutputSettingsAutomatically
@property(assign, nonatomic) BOOL appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;	// G=0x2f959f21; S=0x2f959f31; @synthesize=_appliesOutputSettingsAutomaticallyEnabledComputesColorSettings
@property(assign, nonatomic) BOOL applySettingsAfterLayout;	// G=0x2f95a205; S=0x2f95a215; @synthesize=_applySettingsAfterLayout
@property(assign, nonatomic) BOOL applyingBackdropChanges;	// G=0x2f959f41; S=0x2f959f51; @synthesize=_applyingBackdropChanges
@property(assign, nonatomic) BOOL applyingTransition;	// G=0x2f959f61; S=0x2f959f71; @synthesize=_applyingTransition
@property(assign, nonatomic) BOOL autosizesToFitSuperview;	// G=0x2f959e55; S=0x2f959e65; @synthesize=_autosizesToFitSuperview
@property(retain, nonatomic) _UIBackdropEffectView *backdropEffectView;	// G=0x2f959ff1; S=0x2f95a001; @synthesize=_backdropEffectView
@property(assign, nonatomic) BOOL backdropVisibilitySetOnce;	// G=0x2f95a345; S=0x2f95a355; @synthesize=_backdropVisibilitySetOnce
@property(assign, getter=isBackdropVisible) BOOL backdropVisible;	// G=0x2f957ef1; S=0x2f957f01; converted property
@property(assign, nonatomic) int blurHardEdges;	// G=0x2f95a305; S=0x2f95a315; @synthesize=_blurHardEdges
@property(retain) NSString *blurQuality;	// G=0x2f95711d; S=0x2f95712d; converted property
@property(assign) float blurRadius;	// G=0x2f95706d; S=0x2f95707d; converted property
@property(assign, nonatomic) BOOL blurRadiusSetOnce;	// G=0x2f95a365; S=0x2f95a375; @synthesize=_blurRadiusSetOnce
@property(assign, nonatomic) BOOL blursBackground;	// G=0x2f959fb1; S=0x2f959fc1; @synthesize=_blursBackground
@property(assign) BOOL blursWithHardEdges;	// G=0x2f957175; S=0x2f957195; converted property
@property(retain, nonatomic) UIColor *colorMatrixColorTint;	// G=0x2f95a2a5; S=0x2f95a2b5; @synthesize=_colorMatrixColorTint
@property(assign, nonatomic) float colorMatrixColorTintAlpha;	// G=0x2f95a2c5; S=0x2f95a2d5; @synthesize=_colorMatrixColorTintAlpha
@property(assign, nonatomic) float colorMatrixGrayscaleTintAlpha;	// G=0x2f95a285; S=0x2f95a295; @synthesize=_colorMatrixGrayscaleTintAlpha
@property(assign, nonatomic) float colorMatrixGrayscaleTintLevel;	// G=0x2f95a265; S=0x2f95a275; @synthesize=_colorMatrixGrayscaleTintLevel
@property(retain, nonatomic) CAFilter *colorSaturateFilter;	// G=0x2f95a0b5; S=0x2f95a0c5; @synthesize=_colorSaturateFilter
@property(retain, nonatomic) UIImage *colorTintMaskImage;	// G=0x2f95a085; S=0x2f9563f9; @synthesize=_colorTintMaskImage
@property(retain, nonatomic) UIView *colorTintMaskViewContainer;	// G=0x2f95a185; S=0x2f95a195; @synthesize=_colorTintMaskViewContainer
@property(retain, nonatomic) NSMutableDictionary *colorTintMaskViewMap;	// G=0x2f95a1a5; S=0x2f95a1b5; @synthesize=_colorTintMaskViewMap
@property(retain, nonatomic) UIView *colorTintView;	// G=0x2f95a065; S=0x2f95a075; @synthesize=_colorTintView
@property(retain, nonatomic) id computeAndApplySettingsNotificationObserver;	// G=0x2f95a225; S=0x2f95a235; @synthesize=_computeAndApplySettingsNotificationObserver
@property(assign, nonatomic) BOOL computesColorSettings;	// G=0x2f959ea5; S=0x2f955b9d; @synthesize=_computesColorSettings
@property(assign, nonatomic) int configuration;	// G=0x2f959f11; S=0x2f959389; @synthesize=_configuration
@property(retain, nonatomic) UIView *contentView;	// G=0x2f95a0f5; S=0x2f95a105; @synthesize=_contentView
@property(readonly, assign, nonatomic) UIView *effectView;	// G=0x2f95872d; @dynamic
@property(retain, nonatomic) UIImage *filterMaskImage;	// G=0x2f95a025; S=0x2f9562f1; @synthesize=_filterMaskImage
@property(retain, nonatomic) UIView *filterMaskViewContainer;	// G=0x2f95a1c5; S=0x2f95a1d5; @synthesize=_filterMaskViewContainer
@property(retain, nonatomic) NSMutableDictionary *filterMaskViewMap;	// G=0x2f95a1e5; S=0x2f95a1f5; @synthesize=_filterMaskViewMap
@property(retain, nonatomic) CAFilter *gaussianBlurFilter;	// G=0x2f95a095; S=0x2f95a0a5; @synthesize=_gaussianBlurFilter
@property(retain, nonatomic) UIImage *grayscaleTintMaskImage;	// G=0x2f95a055; S=0x2f956375; @synthesize=_grayscaleTintMaskImage
@property(retain, nonatomic) UIView *grayscaleTintMaskViewContainer;	// G=0x2f95a145; S=0x2f95a155; @synthesize=_grayscaleTintMaskViewContainer
@property(retain, nonatomic) NSMutableDictionary *grayscaleTintMaskViewMap;	// G=0x2f95a165; S=0x2f95a175; @synthesize=_grayscaleTintMaskViewMap
@property(retain, nonatomic) UIView *grayscaleTintView;	// G=0x2f95a035; S=0x2f95a045; @synthesize=_grayscaleTintView
@property(copy, nonatomic) NSString *groupName;	// G=0x2f95a011; S=0x2f955751; @synthesize=_groupName
@property(retain, nonatomic) _UIBackdropViewSettings *inputSettings;	// G=0x2f959ef1; S=0x2f9557c9; @synthesize=_inputSettings
@property(assign, nonatomic) int maskMode;	// G=0x2f95a115; S=0x2f956b9d; @synthesize=_maskMode
@property(assign, nonatomic) id<_UIBackdropViewObserver> observer;	// G=0x2f959e95; S=0x2f955b01; @synthesize=_observer
@property(retain, nonatomic) NSHashTable *observers;	// G=0x2f959e75; S=0x2f959e85; @synthesize=_observers
@property(retain, nonatomic) _UIBackdropViewSettings *outputSettings;	// G=0x2f959f01; S=0x2f955835; @synthesize=_outputSettings
@property(retain, nonatomic) NSMutableSet *partialMaskViews;	// G=0x2f95a125; S=0x2f95a135; @synthesize=_partialMaskViews
@property(assign, nonatomic) float previousBackdropStatisticsBlue;	// G=0x2f95a3c5; S=0x2f95a3d5; @synthesize=_previousBackdropStatisticsBlue
@property(assign, nonatomic) float previousBackdropStatisticsContrast;	// G=0x2f95a3e5; S=0x2f95a3f5; @synthesize=_previousBackdropStatisticsContrast
@property(assign, nonatomic) float previousBackdropStatisticsGreen;	// G=0x2f95a3a5; S=0x2f95a3b5; @synthesize=_previousBackdropStatisticsGreen
@property(assign, nonatomic) float previousBackdropStatisticsRed;	// G=0x2f95a385; S=0x2f95a395; @synthesize=_previousBackdropStatisticsRed
@property(assign, nonatomic) BOOL requiresTintViews;	// G=0x2f958f55; S=0x2f959f81; @synthesize=_requiresTintViews
@property(assign) float saturationDeltaFactor;	// G=0x2f957871; S=0x2f957881; converted property
@property(assign, nonatomic) BOOL simulatesMasks;	// G=0x2f95a2e5; S=0x2f95a2f5; @synthesize=_simulatesMasks
@property(assign, nonatomic) int style;	// G=0x2f959e35; S=0x2f959e45; @synthesize=_style
@property(retain, nonatomic) CAFilter *tintFilter;	// G=0x2f95a0d5; S=0x2f95a0e5; @synthesize=_tintFilter
@property(assign, nonatomic) CFRunLoopObserverRef updateInputBoundsRunLoopObserver;	// G=0x2f95a325; S=0x2f95a335; @synthesize=_updateInputBoundsRunLoopObserver
@property(assign, nonatomic) BOOL updateMaskViewsForViewReentrancyGuard;	// G=0x2f95a245; S=0x2f95a255; @synthesize=_updateMaskViewsForViewReentrancyGuard
@property(assign, nonatomic) BOOL wantsColorSettings;	// G=0x2f959f91; S=0x2f959fa1; @synthesize=_wantsColorSettings
+ (id)allBackdropViews;	// 0x2f954691
+ (Class)defaultSettingsClass;	// 0x2f954d2d
+ (void)restoreColorSettingsForDidBecomeActive:(id)restoreColorSettingsFor;	// 0x2f954a09
+ (void)restoreColorSettingsForRequester:(id)requester;	// 0x2f954bad
+ (void)restoreColorSettingsForRunLoopModePop:(id)runLoopModePop;	// 0x2f954985
+ (void)suppressColorSettingsForRequester:(id)requester;	// 0x2f954a39
+ (void)suppressColorSettingsForRunLoopModePush:(id)runLoopModePush;	// 0x2f954931
+ (void)suppressColorSettingsForWillResignActive:(id)suppressColorSettingsFor;	// 0x2f9549d9
- (id)init;	// 0x2f955351
- (id)initWithFrame:(CGRect)frame;	// 0x2f955321
- (id)initWithFrame:(CGRect)frame autosizesToFitSuperview:(BOOL)fitSuperview settings:(id)settings;	// 0x2f954d49
- (id)initWithFrame:(CGRect)frame privateStyle:(int)style;	// 0x2f9552c9
- (id)initWithFrame:(CGRect)frame settings:(id)settings;	// 0x2f955139
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x2f955271
- (id)initWithPrivateStyle:(int)privateStyle;	// 0x2f955215
- (id)initWithSettings:(id)settings;	// 0x2f955171
- (id)initWithStyle:(int)style;	// 0x2f9551b9
// declared property getter: - (BOOL)_backdropVisible;	// 0x2f95a469
// declared property getter: - (id)_blurQuality;	// 0x2f95a405
// declared property getter: - (float)_blurRadius;	// 0x2f95a429
// declared property getter: - (float)_saturationDeltaFactor;	// 0x2f95a449
- (void)_setBlursBackground:(BOOL)background;	// 0x2f95805d
- (void)_updateInputBounds;	// 0x2f957699
// declared property getter: - (BOOL)_zoomsBack;	// 0x2f95a489
- (void)addBackdropEffectViewIfNeededForSettings:(id)settings;	// 0x2f9587d5
- (void)addColorTintViewIfNeededForSettings:(id)settings;	// 0x2f958a61
- (void)addContentViewIfNeededForSettings:(id)settings;	// 0x2f958bb5
- (void)addGrayscaleTintViewIfNeededForSettings:(id)settings;	// 0x2f95890d
- (void)addObserver:(id)observer;	// 0x2f955b45
- (void)adjustTintImplementationIfNeeded:(id)needed;	// 0x2f959099
// declared property getter: - (BOOL)allowsColorSettingsSuppression;	// 0x2f959fd1
// declared property getter: - (double)appliesOutputSettingsAnimationDuration;	// 0x2f959ec5
// declared property getter: - (BOOL)appliesOutputSettingsAutomatically;	// 0x2f959eb5
// declared property getter: - (BOOL)appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;	// 0x2f959f21
- (void)applyOverlayBlendMode:(int)mode toView:(id)view;	// 0x2f956f71
- (void)applyOverlayBlendModeToView:(id)view;	// 0x2f956f85
- (void)applySettings:(id)settings;	// 0x2f959921
// declared property getter: - (BOOL)applySettingsAfterLayout;	// 0x2f95a205
- (void)applySettingsWithBuiltInAnimation:(id)animation;	// 0x2f9597a1
// declared property getter: - (BOOL)applyingBackdropChanges;	// 0x2f959f41
// declared property getter: - (BOOL)applyingTransition;	// 0x2f959f61
// declared property getter: - (BOOL)autosizesToFitSuperview;	// 0x2f959e55
// declared property getter: - (id)backdropEffectView;	// 0x2f959ff1
- (void)backdropLayerStatisticsDidChange:(id)backdropLayerStatistics;	// 0x2f955a39
// declared property getter: - (BOOL)backdropVisibilitySetOnce;	// 0x2f95a345
// declared property getter: - (int)blurHardEdges;	// 0x2f95a305
// converted property getter: - (id)blurQuality;	// 0x2f95711d
// converted property getter: - (float)blurRadius;	// 0x2f95706d
// declared property getter: - (BOOL)blurRadiusSetOnce;	// 0x2f95a365
// declared property getter: - (BOOL)blursBackground;	// 0x2f959fb1
// converted property getter: - (BOOL)blursWithHardEdges;	// 0x2f957175
- (void)clearUpdateInputBoundsRunLoopObserver;	// 0x2f955711
// declared property getter: - (id)colorMatrixColorTint;	// 0x2f95a2a5
// declared property getter: - (float)colorMatrixColorTintAlpha;	// 0x2f95a2c5
// declared property getter: - (float)colorMatrixGrayscaleTintAlpha;	// 0x2f95a285
// declared property getter: - (float)colorMatrixGrayscaleTintLevel;	// 0x2f95a265
// declared property getter: - (id)colorSaturateFilter;	// 0x2f95a0b5
// declared property getter: - (id)colorTintMaskImage;	// 0x2f95a085
// declared property getter: - (id)colorTintMaskViewContainer;	// 0x2f95a185
// declared property getter: - (id)colorTintMaskViewMap;	// 0x2f95a1a5
// declared property getter: - (id)colorTintView;	// 0x2f95a065
- (void)computeAndApplySettings:(id)settings;	// 0x2f9595c1
- (void)computeAndApplySettingsForTransition;	// 0x2f95966d
// declared property getter: - (id)computeAndApplySettingsNotificationObserver;	// 0x2f95a225
// declared property getter: - (BOOL)computesColorSettings;	// 0x2f959ea5
// declared property getter: - (int)configuration;	// 0x2f959f11
// declared property getter: - (id)contentView;	// 0x2f95a0f5
- (void)dealloc;	// 0x2f955395
- (void)delayedComputeAndApplySettings;	// 0x2f959401
- (void)didMoveToSuperview;	// 0x2f955dc1
// declared property getter: - (id)effectView;	// 0x2f95872d
- (void)ensureProperSubviewOrdering;	// 0x2f958cdd
// declared property getter: - (id)filterMaskImage;	// 0x2f95a025
// declared property getter: - (id)filterMaskViewContainer;	// 0x2f95a1c5
// declared property getter: - (id)filterMaskViewMap;	// 0x2f95a1e5
- (id)filters;	// 0x2f956fad
// declared property getter: - (id)gaussianBlurFilter;	// 0x2f95a095
// declared property getter: - (id)grayscaleTintMaskImage;	// 0x2f95a055
// declared property getter: - (id)grayscaleTintMaskViewContainer;	// 0x2f95a145
// declared property getter: - (id)grayscaleTintMaskViewMap;	// 0x2f95a165
// declared property getter: - (id)grayscaleTintView;	// 0x2f95a035
// declared property getter: - (id)groupName;	// 0x2f95a011
// declared property getter: - (id)inputSettings;	// 0x2f959ef1
// converted property getter: - (BOOL)isBackdropVisible;	// 0x2f957ef1
- (void)layoutSubviews;	// 0x2f955e91
// declared property getter: - (int)maskMode;	// 0x2f95a115
// declared property getter: - (id)observer;	// 0x2f959e95
// declared property getter: - (id)observers;	// 0x2f959e75
// declared property getter: - (id)outputSettings;	// 0x2f959f01
// declared property getter: - (id)partialMaskViews;	// 0x2f95a125
- (void)prepareForTransitionToSettings:(id)settings;	// 0x2f9580d9
// declared property getter: - (float)previousBackdropStatisticsBlue;	// 0x2f95a3c5
// declared property getter: - (float)previousBackdropStatisticsContrast;	// 0x2f95a3e5
// declared property getter: - (float)previousBackdropStatisticsGreen;	// 0x2f95a3a5
// declared property getter: - (float)previousBackdropStatisticsRed;	// 0x2f95a385
- (void)removeMaskViews;	// 0x2f956eb9
- (void)removeObserver:(id)observer;	// 0x2f955b71
- (void)removeOverlayBlendModeFromView:(id)view;	// 0x2f956f99
// declared property getter: - (BOOL)requiresTintViews;	// 0x2f958f55
// converted property getter: - (float)saturationDeltaFactor;	// 0x2f957871
- (void)scheduleUpdateInputBoundsIfNeeded;	// 0x2f9575b9
// declared property setter: - (void)setAllowsColorSettingsSuppression:(BOOL)suppression;	// 0x2f959fe1
// declared property setter: - (void)setAppliesOutputSettingsAnimationDuration:(double)duration;	// 0x2f959edd
// declared property setter: - (void)setAppliesOutputSettingsAutomatically:(BOOL)automatically;	// 0x2f955d11
// declared property setter: - (void)setAppliesOutputSettingsAutomaticallyEnabledComputesColorSettings:(BOOL)settings;	// 0x2f959f31
// declared property setter: - (void)setApplySettingsAfterLayout:(BOOL)layout;	// 0x2f95a215
// declared property setter: - (void)setApplyingBackdropChanges:(BOOL)changes;	// 0x2f959f51
// declared property setter: - (void)setApplyingTransition:(BOOL)transition;	// 0x2f959f71
// declared property setter: - (void)setAutosizesToFitSuperview:(BOOL)fitSuperview;	// 0x2f959e65
// declared property setter: - (void)setBackdropEffectView:(id)view;	// 0x2f95a001
// declared property setter: - (void)setBackdropVisibilitySetOnce:(BOOL)once;	// 0x2f95a355
// converted property setter: - (void)setBackdropVisible:(BOOL)visible;	// 0x2f957f01
- (void)setBlurFilterWithRadius:(float)radius blurQuality:(id)quality;	// 0x2f9571ad
- (void)setBlurFilterWithRadius:(float)radius blurQuality:(id)quality blurHardEdges:(int)edges;	// 0x2f9571f9
// declared property setter: - (void)setBlurHardEdges:(int)edges;	// 0x2f95a315
// converted property setter: - (void)setBlurQuality:(id)quality;	// 0x2f95712d
// converted property setter: - (void)setBlurRadius:(float)radius;	// 0x2f95707d
// declared property setter: - (void)setBlurRadiusSetOnce:(BOOL)once;	// 0x2f95a375
// declared property setter: - (void)setBlursBackground:(BOOL)background;	// 0x2f959fc1
// converted property setter: - (void)setBlursWithHardEdges:(BOOL)hardEdges;	// 0x2f957195
- (void)setBounds:(CGRect)bounds;	// 0x2f956159
// declared property setter: - (void)setColorMatrixColorTint:(id)tint;	// 0x2f95a2b5
// declared property setter: - (void)setColorMatrixColorTintAlpha:(float)alpha;	// 0x2f95a2d5
// declared property setter: - (void)setColorMatrixGrayscaleTintAlpha:(float)alpha;	// 0x2f95a295
// declared property setter: - (void)setColorMatrixGrayscaleTintLevel:(float)level;	// 0x2f95a275
// declared property setter: - (void)setColorSaturateFilter:(id)filter;	// 0x2f95a0c5
// declared property setter: - (void)setColorTintMaskImage:(id)image;	// 0x2f9563f9
// declared property setter: - (void)setColorTintMaskViewContainer:(id)container;	// 0x2f95a195
// declared property setter: - (void)setColorTintMaskViewMap:(id)map;	// 0x2f95a1b5
// declared property setter: - (void)setColorTintView:(id)view;	// 0x2f95a075
// declared property setter: - (void)setComputeAndApplySettingsNotificationObserver:(id)observer;	// 0x2f95a235
// declared property setter: - (void)setComputesColorSettings:(BOOL)settings;	// 0x2f955b9d
// declared property setter: - (void)setConfiguration:(int)configuration;	// 0x2f959389
// declared property setter: - (void)setContentView:(id)view;	// 0x2f95a105
// declared property setter: - (void)setFilterMaskImage:(id)image;	// 0x2f9562f1
// declared property setter: - (void)setFilterMaskViewContainer:(id)container;	// 0x2f95a1d5
// declared property setter: - (void)setFilterMaskViewMap:(id)map;	// 0x2f95a1f5
- (void)setFrame:(CGRect)frame;	// 0x2f9560b5
// declared property setter: - (void)setGaussianBlurFilter:(id)filter;	// 0x2f95a0a5
// declared property setter: - (void)setGrayscaleTintMaskImage:(id)image;	// 0x2f956375
// declared property setter: - (void)setGrayscaleTintMaskViewContainer:(id)container;	// 0x2f95a155
// declared property setter: - (void)setGrayscaleTintMaskViewMap:(id)map;	// 0x2f95a175
// declared property setter: - (void)setGrayscaleTintView:(id)view;	// 0x2f95a045
// declared property setter: - (void)setGroupName:(id)name;	// 0x2f955751
// declared property setter: - (void)setInputSettings:(id)settings;	// 0x2f9557c9
- (void)setMaskImage:(id)image onLayer:(id)layer;	// 0x2f9561fd
// declared property setter: - (void)setMaskMode:(int)mode;	// 0x2f956b9d
// declared property setter: - (void)setObserver:(id)observer;	// 0x2f955b01
// declared property setter: - (void)setObservers:(id)observers;	// 0x2f959e85
// declared property setter: - (void)setOutputSettings:(id)settings;	// 0x2f955835
// declared property setter: - (void)setPartialMaskViews:(id)views;	// 0x2f95a135
// declared property setter: - (void)setPreviousBackdropStatisticsBlue:(float)blue;	// 0x2f95a3d5
// declared property setter: - (void)setPreviousBackdropStatisticsContrast:(float)contrast;	// 0x2f95a3f5
// declared property setter: - (void)setPreviousBackdropStatisticsGreen:(float)green;	// 0x2f95a3b5
// declared property setter: - (void)setPreviousBackdropStatisticsRed:(float)red;	// 0x2f95a395
// declared property setter: - (void)setRequiresTintViews:(BOOL)views;	// 0x2f959f81
// converted property setter: - (void)setSaturationDeltaFactor:(float)factor;	// 0x2f957881
// declared property setter: - (void)setSimulatesMasks:(BOOL)masks;	// 0x2f95a2f5
// declared property setter: - (void)setStyle:(int)style;	// 0x2f959e45
// declared property setter: - (void)setTintFilter:(id)filter;	// 0x2f95a0e5
- (void)setTintFilterForSettings:(id)settings;	// 0x2f957a19
// declared property setter: - (void)setUpdateInputBoundsRunLoopObserver:(CFRunLoopObserverRef)observer;	// 0x2f95a335
// declared property setter: - (void)setUpdateMaskViewsForViewReentrancyGuard:(BOOL)viewReentrancyGuard;	// 0x2f95a255
- (void)setUsesZoom;	// 0x2f958015
// declared property setter: - (void)setWantsColorSettings:(BOOL)settings;	// 0x2f959fa1
// declared property setter: - (void)setZoomsBack:(BOOL)back;	// 0x2f957fbd
// declared property setter: - (void)set_backdropVisible:(BOOL)visible;	// 0x2f95a479
// declared property setter: - (void)set_blurQuality:(id)quality;	// 0x2f95a419
// declared property setter: - (void)set_blurRadius:(float)radius;	// 0x2f95a439
// declared property setter: - (void)set_saturationDeltaFactor:(float)factor;	// 0x2f95a459
- (void)settingsDidChange:(id)change;	// 0x2f9558a1
// declared property getter: - (BOOL)simulatesMasks;	// 0x2f95a2e5
// declared property getter: - (int)style;	// 0x2f959e35
// declared property getter: - (id)tintFilter;	// 0x2f95a0d5
- (void)transitionComplete;	// 0x2f958611
- (void)transitionIncrementallyToPrivateStyle:(int)privateStyle weighting:(float)weighting;	// 0x2f958601
- (void)transitionIncrementallyToStyle:(int)style weighting:(float)weighting;	// 0x2f958425
- (void)transitionToColor:(id)color;	// 0x2f958375
- (void)transitionToPrivateStyle:(int)privateStyle;	// 0x2f958365
- (void)transitionToSettings:(id)settings;	// 0x2f9583f5
- (void)transitionToStyle:(int)style;	// 0x2f958319
// declared property getter: - (CFRunLoopObserverRef)updateInputBoundsRunLoopObserver;	// 0x2f95a325
- (void)updateMaskViewForView:(id)view flag:(int)flag;	// 0x2f95647d
- (void)updateMaskViewsForView:(id)view;	// 0x2f956979
// declared property getter: - (BOOL)updateMaskViewsForViewReentrancyGuard;	// 0x2f95a245
- (void)updateSubviewHierarchyIfNeededForSettings:(id)settings;	// 0x2f95873d
// declared property getter: - (BOOL)wantsColorSettings;	// 0x2f959f91
@end

