/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EKIdentityProtocol.h"
#import "EventKit-Structs.h"

@class NSURL, EKObjectID, NSString;

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
@property(retain, nonatomic) NSURL *URI;	// G=0x31fe1781; S=0x31fe1791; @synthesize=_URI
@property(assign, nonatomic) BOOL alerted;	// G=0x31fe17f1; S=0x31fe1801; @synthesize=_alerted
@property(assign, nonatomic) CGColorRef dotColor;	// G=0x31fe17c1; S=0x31fe16ad; @synthesize=_dotColor
@property(retain, nonatomic) NSString *emailAddress;	// G=0x31fe1761; S=0x31fe1771; @synthesize=_emailAddress
@property(assign, nonatomic) BOOL hiddenFromNotificationCenter;	// G=0x31fe17d1; S=0x31fe17e1; @synthesize=_hiddenFromNotificationCenter
@property(retain, nonatomic) NSString *name;	// G=0x31fe1741; S=0x31fe1751; @synthesize=_name
@property(readonly, assign, nonatomic) BOOL needsAlert;	// G=0x31fe16dd; 
@property(retain, nonatomic) EKObjectID *objectID;	// G=0x31fe17a1; S=0x31fe17b1; @synthesize=_objectID
@property(retain, nonatomic) NSString *title;	// G=0x31fe1721; S=0x31fe1731; @synthesize=_title
@property(assign, nonatomic) int type;	// G=0x31fe1701; S=0x31fe1711; @synthesize=_type
- (id)initWithType:(int)type;	// 0x31fe15d1
// declared property getter: - (id)URI;	// 0x31fe1781
// declared property getter: - (BOOL)alerted;	// 0x31fe17f1
- (void)dealloc;	// 0x31fe1619
// declared property getter: - (CGColorRef)dotColor;	// 0x31fe17c1
// declared property getter: - (id)emailAddress;	// 0x31fe1761
// declared property getter: - (BOOL)hiddenFromNotificationCenter;	// 0x31fe17d1
// declared property getter: - (id)name;	// 0x31fe1741
// declared property getter: - (BOOL)needsAlert;	// 0x31fe16dd
// declared property getter: - (id)objectID;	// 0x31fe17a1
// declared property setter: - (void)setAlerted:(BOOL)alerted;	// 0x31fe1801
// declared property setter: - (void)setDotColor:(CGColorRef)color;	// 0x31fe16ad
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x31fe1771
// declared property setter: - (void)setHiddenFromNotificationCenter:(BOOL)notificationCenter;	// 0x31fe17e1
// declared property setter: - (void)setName:(id)name;	// 0x31fe1751
// declared property setter: - (void)setObjectID:(id)anId;	// 0x31fe17b1
// declared property setter: - (void)setTitle:(id)title;	// 0x31fe1731
// declared property setter: - (void)setType:(int)type;	// 0x31fe1711
// declared property setter: - (void)setURI:(id)uri;	// 0x31fe1791
// declared property getter: - (id)title;	// 0x31fe1721
// declared property getter: - (int)type;	// 0x31fe1701
@end
