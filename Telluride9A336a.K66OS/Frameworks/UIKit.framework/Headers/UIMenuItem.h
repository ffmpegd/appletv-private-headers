/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface UIMenuItem : NSObject {
@private
	NSString *_title;	// 4 = 0x4
	SEL _action;	// 8 = 0x8
	BOOL _dontDismiss;	// 12 = 0xc
}
@property(assign, nonatomic) SEL action;	// G=0x35219859; S=0x35217d3d; @synthesize=_action
@property(assign, nonatomic) BOOL dontDismiss;	// G=0x35219879; S=0x35217d4d; @synthesize=_dontDismiss
@property(copy, nonatomic) NSString *title;	// G=0x35219869; S=0x35217d19; @synthesize=_title
- (id)initWithTitle:(id)title action:(SEL)action;	// 0x35217cb9
// declared property getter: - (SEL)action;	// 0x35219859
// declared property getter: - (BOOL)dontDismiss;	// 0x35219879
// declared property setter: - (void)setAction:(SEL)action;	// 0x35217d3d
// declared property setter: - (void)setDontDismiss:(BOOL)dismiss;	// 0x35217d4d
// declared property setter: - (void)setTitle:(id)title;	// 0x35217d19
// declared property getter: - (id)title;	// 0x35219869
@end

