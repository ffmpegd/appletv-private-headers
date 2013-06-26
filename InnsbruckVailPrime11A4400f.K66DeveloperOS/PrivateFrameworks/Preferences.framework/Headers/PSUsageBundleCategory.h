/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import </libobjc.A.h>

@class NSString, PSUsageBundleApp;

@interface PSUsageBundleCategory : NSObject {
	PSUsageBundleApp *_usageBundleApp;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *identifier;	// G=0x324a62fd; S=0x324a630d; @synthesize=_identifier
@property(retain, nonatomic) NSString *name;	// G=0x324a631d; S=0x324a632d; @synthesize=_name
@property(assign, nonatomic) PSUsageBundleApp *usageBundleApp;	// G=0x324a62dd; S=0x324a62ed; @synthesize=_usageBundleApp
+ (id)categoryNamed:(id)named withIdentifier:(id)identifier forUsageBundleApp:(id)usageBundleApp;	// 0x324a61cd
- (id)description;	// 0x324a6255
// declared property getter: - (id)identifier;	// 0x324a62fd
// declared property getter: - (id)name;	// 0x324a631d
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x324a630d
// declared property setter: - (void)setName:(id)name;	// 0x324a632d
// declared property setter: - (void)setUsageBundleApp:(id)app;	// 0x324a62ed
// declared property getter: - (id)usageBundleApp;	// 0x324a62dd
@end
