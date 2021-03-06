/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import </libobjc.A.h>

@class NSDictionary, NSString;

@interface AFAccount : NSObject {
	BOOL _isActive;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
	NSString *_label;	// 12 = 0xc
	NSString *_assistantIdentifier;	// 16 = 0x10
	NSString *_speechIdentifier;	// 20 = 0x14
	NSString *_hostname;	// 24 = 0x18
	NSString *_predefinedServer;	// 28 = 0x1c
	NSString *_aceHost;	// 32 = 0x20
	NSString *_group;	// 36 = 0x24
	NSDictionary *_lastSyncDates;	// 40 = 0x28
	NSString *_localeIdentifier;	// 44 = 0x2c
}
@property(copy, nonatomic) NSString *aceHost;	// G=0x30199ff1; S=0x3019a005; @synthesize=_aceHost
@property(copy, nonatomic) NSString *assistantIdentifier;	// G=0x30199f61; S=0x30199f75; @synthesize=_assistantIdentifier
@property(copy, nonatomic) NSString *group;	// G=0x3019a015; S=0x3019a029; @synthesize=_group
@property(copy, nonatomic) NSString *hostname;	// G=0x30199fa9; S=0x30199fbd; @synthesize=_hostname
@property(copy, nonatomic) NSString *identifier;	// G=0x30199f19; S=0x30199f2d; @synthesize=_identifier
@property(readonly, assign, nonatomic) BOOL isActive;	// G=0x3019a081; @synthesize=_isActive
@property(copy, nonatomic) NSString *label;	// G=0x30199f3d; S=0x30199f51; @synthesize=_label
@property(copy, nonatomic) NSDictionary *lastSyncDates;	// G=0x3019a039; S=0x3019a04d; @synthesize=_lastSyncDates
@property(copy, nonatomic) NSString *localeIdentifier;	// G=0x3019a05d; S=0x3019a071; @synthesize=_localeIdentifier
@property(copy, nonatomic) NSString *predefinedServer;	// G=0x30199fcd; S=0x30199fe1; @synthesize=_predefinedServer
@property(copy, nonatomic) NSString *speechIdentifier;	// G=0x30199f85; S=0x30199f99; @synthesize=_speechIdentifier
- (id)initWithMessageDictionary:(id)messageDictionary;	// 0x30199ac5
- (void).cxx_destruct;	// 0x3019a091
// declared property getter: - (id)aceHost;	// 0x30199ff1
// declared property getter: - (id)assistantIdentifier;	// 0x30199f61
- (id)description;	// 0x30199a09
// declared property getter: - (id)group;	// 0x3019a015
// declared property getter: - (id)hostname;	// 0x30199fa9
// declared property getter: - (id)identifier;	// 0x30199f19
// declared property getter: - (BOOL)isActive;	// 0x3019a081
// declared property getter: - (id)label;	// 0x30199f3d
// declared property getter: - (id)lastSyncDates;	// 0x3019a039
// declared property getter: - (id)localeIdentifier;	// 0x3019a05d
- (id)messageDictionary;	// 0x30199d55
// declared property getter: - (id)predefinedServer;	// 0x30199fcd
// declared property setter: - (void)setAceHost:(id)host;	// 0x3019a005
// declared property setter: - (void)setAssistantIdentifier:(id)identifier;	// 0x30199f75
// declared property setter: - (void)setGroup:(id)group;	// 0x3019a029
// declared property setter: - (void)setHostname:(id)hostname;	// 0x30199fbd
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x30199f2d
// declared property setter: - (void)setLabel:(id)label;	// 0x30199f51
// declared property setter: - (void)setLastSyncDates:(id)dates;	// 0x3019a04d
// declared property setter: - (void)setLocaleIdentifier:(id)identifier;	// 0x3019a071
// declared property setter: - (void)setPredefinedServer:(id)server;	// 0x30199fe1
// declared property setter: - (void)setSpeechIdentifier:(id)identifier;	// 0x30199f99
// declared property getter: - (id)speechIdentifier;	// 0x30199f85
@end

