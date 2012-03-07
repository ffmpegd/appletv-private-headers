/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MSShareStateNotificationString : NSObject {
@private
	NSString *_sourcePersonID;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_body;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *body;	// G=0x36fecc09; S=0x36fecc19; @synthesize=_body
@property(retain, nonatomic) NSString *sourcePersonID;	// G=0x36fecba1; S=0x36fecbb1; @synthesize=_sourcePersonID
@property(retain, nonatomic) NSString *title;	// G=0x36fecbd5; S=0x36fecbe5; @synthesize=_title
+ (id)notificationStringsWithTitle:(id)title body:(id)body sourcePersonID:(id)anId;	// 0x36feca55
- (id)initWithTitle:(id)title body:(id)body sourcePersonID:(id)anId;	// 0x36feca9d
// declared property getter: - (id)body;	// 0x36fecc09
- (void)dealloc;	// 0x36fecb2d
// declared property setter: - (void)setBody:(id)body;	// 0x36fecc19
// declared property setter: - (void)setSourcePersonID:(id)anId;	// 0x36fecbb1
// declared property setter: - (void)setTitle:(id)title;	// 0x36fecbe5
// declared property getter: - (id)sourcePersonID;	// 0x36fecba1
// declared property getter: - (id)title;	// 0x36fecbd5
@end

