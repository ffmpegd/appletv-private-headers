/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import </libobjc.A.h>
#import "SBFLegibilitySettingsProvider.h"
#import "_UIBackdropViewObserver.h"

@class _UIBackdropView, _UILegibilitySettings;
@protocol SBFLegibilitySettingsProviderDelegate;

@interface SBFBackdropLegibilitySettingsProvider : NSObject <_UIBackdropViewObserver, SBFLegibilitySettingsProvider> {
	_UIBackdropView *_backdropView;	// 4 = 0x4
	id<SBFLegibilitySettingsProviderDelegate> _delegate;	// 8 = 0x8
	_UILegibilitySettings *_legibilitySettings;	// 12 = 0xc
}
@property(assign, nonatomic) id<SBFLegibilitySettingsProviderDelegate> delegate;	// G=0x32757739; S=0x327575fd; @synthesize=_delegate
@property(readonly, assign, nonatomic) _UILegibilitySettings *legibilitySettings;	// G=0x32757749; @synthesize=_legibilitySettings
- (id)initWithBackdropView:(id)backdropView;	// 0x32757511
- (void)backdropViewDidChange:(id)backdropView;	// 0x3275766d
- (void)dealloc;	// 0x32757585
// declared property getter: - (id)delegate;	// 0x32757739
// declared property getter: - (id)legibilitySettings;	// 0x32757749
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x327575fd
@end
