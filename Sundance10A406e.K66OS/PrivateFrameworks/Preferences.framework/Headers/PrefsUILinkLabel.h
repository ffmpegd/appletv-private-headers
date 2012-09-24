/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UILabel.h> // Unknown library
#import "Preferences-Structs.h"

@class NSURL;

@interface PrefsUILinkLabel : UILabel {
	NSURL *_url;	// 144 = 0x90
	BOOL _touchingURL;	// 148 = 0x94
	id _target;	// 152 = 0x98
	SEL _action;	// 156 = 0x9c
	NSURL *_URL;	// 160 = 0xa0
}
@property(retain, nonatomic) NSURL *URL;	// G=0x33186021; S=0x33185d09; @synthesize=_URL
@property(assign, nonatomic) SEL action;	// G=0x33186041; S=0x33185c89; @synthesize=_action
@property(assign, nonatomic) id target;	// G=0x33186031; S=0x33185cc9; @synthesize=_target
- (id)initWithFrame:(CGRect)frame;	// 0x33185b59
// declared property getter: - (id)URL;	// 0x33186021
// declared property getter: - (SEL)action;	// 0x33186041
- (id)color:(id)color byMultiplyingSubComponentsBy:(float)by;	// 0x33185f99
- (void)dealloc;	// 0x33185c3d
- (void)openURL:(id)url;	// 0x33185d4d
// declared property setter: - (void)setAction:(SEL)action;	// 0x33185c89
// declared property setter: - (void)setTarget:(id)target;	// 0x33185cc9
// declared property setter: - (void)setURL:(id)url;	// 0x33185d09
- (void)tappedLink:(id)link;	// 0x33185f0d
// declared property getter: - (id)target;	// 0x33186031
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x33185d9d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33185ecd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33185e8d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33185df5
@end
