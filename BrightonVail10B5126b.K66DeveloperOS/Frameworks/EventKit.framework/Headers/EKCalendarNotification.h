/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "EKIdentityProtocol.h"

@class NSString, NSURL, EKObjectID;

__attribute__((visibility("hidden")))
@interface EKCalendarNotification : NSObject <EKIdentityProtocol> {
	int _type;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSString *_emailAddress;	// 16 = 0x10
	NSURL *_URI;	// 20 = 0x14
	EKObjectID *_objectID;	// 24 = 0x18
	CGColorRef _dotColor;	// 28 = 0x1c
	BOOL _hiddenFromNotificationCenter;	// 32 = 0x20
	BOOL _alerted;	// 33 = 0x21
}
@property(retain, nonatomic) NSURL *URI;	// G=0x31873efd; S=0x31873f0d; @synthesize=_URI
@property(assign, nonatomic) BOOL alerted;	// G=0x31873f6d; S=0x31873f7d; @synthesize=_alerted
@property(assign, nonatomic) CGColorRef dotColor;	// G=0x31873f3d; S=0x31873e29; @synthesize=_dotColor
@property(retain, nonatomic) NSString *emailAddress;	// G=0x31873edd; S=0x31873eed; @synthesize=_emailAddress
@property(assign, nonatomic) BOOL hiddenFromNotificationCenter;	// G=0x31873f4d; S=0x31873f5d; @synthesize=_hiddenFromNotificationCenter
@property(retain, nonatomic) NSString *name;	// G=0x31873ebd; S=0x31873ecd; @synthesize=_name
@property(readonly, assign, nonatomic) BOOL needsAlert;	// G=0x31873e59; 
@property(retain, nonatomic) EKObjectID *objectID;	// G=0x31873f1d; S=0x31873f2d; @synthesize=_objectID
@property(retain, nonatomic) NSString *title;	// G=0x31873e9d; S=0x31873ead; @synthesize=_title
@property(assign, nonatomic) int type;	// G=0x31873e7d; S=0x31873e8d; @synthesize=_type
- (id)initWithType:(int)type;	// 0x31873d39
// declared property getter: - (id)URI;	// 0x31873efd
// declared property getter: - (BOOL)alerted;	// 0x31873f6d
- (void)dealloc;	// 0x31873d81
// declared property getter: - (CGColorRef)dotColor;	// 0x31873f3d
// declared property getter: - (id)emailAddress;	// 0x31873edd
// declared property getter: - (BOOL)hiddenFromNotificationCenter;	// 0x31873f4d
// declared property getter: - (id)name;	// 0x31873ebd
// declared property getter: - (BOOL)needsAlert;	// 0x31873e59
// declared property getter: - (id)objectID;	// 0x31873f1d
// declared property setter: - (void)setAlerted:(BOOL)alerted;	// 0x31873f7d
// declared property setter: - (void)setDotColor:(CGColorRef)color;	// 0x31873e29
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x31873eed
// declared property setter: - (void)setHiddenFromNotificationCenter:(BOOL)notificationCenter;	// 0x31873f5d
// declared property setter: - (void)setName:(id)name;	// 0x31873ecd
// declared property setter: - (void)setObjectID:(id)anId;	// 0x31873f2d
// declared property setter: - (void)setTitle:(id)title;	// 0x31873ead
// declared property setter: - (void)setType:(int)type;	// 0x31873e8d
// declared property setter: - (void)setURI:(id)uri;	// 0x31873f0d
// declared property getter: - (id)title;	// 0x31873e9d
// declared property getter: - (int)type;	// 0x31873e7d
@end

