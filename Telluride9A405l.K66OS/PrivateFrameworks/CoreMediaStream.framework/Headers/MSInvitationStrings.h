/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MSInvitationStrings : NSObject {
@private
	NSString *_title;	// 4 = 0x4
	NSString *_body;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *body;	// G=0x36feca21; S=0x36feca31; @synthesize=_body
@property(retain, nonatomic) NSString *title;	// G=0x36fec9ed; S=0x36fec9fd; @synthesize=_title
+ (id)invitationStringsWithTitle:(id)title body:(id)body;	// 0x36fec8d9
- (id)initWithTitle:(id)title body:(id)body;	// 0x36fec919
// declared property getter: - (id)body;	// 0x36feca21
- (void)dealloc;	// 0x36fec98d
// declared property setter: - (void)setBody:(id)body;	// 0x36feca31
// declared property setter: - (void)setTitle:(id)title;	// 0x36fec9fd
// declared property getter: - (id)title;	// 0x36fec9ed
@end

