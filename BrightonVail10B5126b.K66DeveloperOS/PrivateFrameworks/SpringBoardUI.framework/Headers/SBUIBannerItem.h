/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <NSObject.h> // Unknown library

@protocol SBUIBannerSource;

@interface SBUIBannerItem : NSObject {
	id<SBUIBannerSource> _source;	// 4 = 0x4
}
@property(retain, nonatomic) id<SBUIBannerSource> source;	// G=0x3547cc2d; S=0x3547cc3d; @synthesize=_source
- (id)action;	// 0x3547cc05
- (BOOL)canShowInAssistant;	// 0x3547cc29
- (void)dealloc;	// 0x3547cbb1
- (BOOL)isSticky;	// 0x3547cc01
- (unsigned)priority;	// 0x3547cbfd
// declared property setter: - (void)setSource:(id)source;	// 0x3547cc3d
- (id)sortDate;	// 0x3547cc0d
- (id)sound;	// 0x3547cc09
// declared property getter: - (id)source;	// 0x3547cc2d
@end
