/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRDeviceKeyboardMessage : XXUnknownSuperclass {
	NSString *_string;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_subText;	// 12 = 0xc
	unsigned long long _sessionID;	// 16 = 0x10
	int _msgType;	// 24 = 0x18
	int _keyboardType;	// 28 = 0x1c
	BOOL _secureText;	// 32 = 0x20
	unsigned _version;	// 36 = 0x24
}
@property(assign) int keyboardType;	// G=0x3a0595; S=0x3a05a5; converted property
@property(assign) int msgType;	// G=0x3a0575; S=0x3a0585; converted property
@property(assign) BOOL secureText;	// G=0x3a0601; S=0x3a0611; converted property
@property(assign) unsigned long long sessionID;	// G=0x3a05b5; S=0x3a05cd; converted property
@property(retain) NSString *string;	// G=0x3a0491; S=0x3a04a1; converted property
@property(retain) NSString *subText;	// G=0x3a0529; S=0x3a0539; converted property
@property(retain) NSString *title;	// G=0x3a04dd; S=0x3a04ed; converted property
@property(assign) unsigned version;	// G=0x3a05e1; S=0x3a05f1; converted property
+ (id)_dictionaryArraytoDictionary:(id)dictionary;	// 0x3a073d
+ (id)_keyValueToDictionary:(id)dictionary key:(id)key;	// 0x3a0841
+ (id)dictionaryToDictionaryArray:(id)dictionaryArray;	// 0x3a0621
+ (id)messageFromDictionary:(id)dictionary;	// 0x3a0001
+ (id)messageFromDictionaryArray:(id)dictionaryArray;	// 0x39ffc9
+ (unsigned long)vendNewSessionID;	// 0x39ffb5
- (void)dealloc;	// 0x3a01ed
- (id)dictionary;	// 0x3a029d
- (id)dictionaryArray;	// 0x3a0265
// converted property getter: - (int)keyboardType;	// 0x3a0595
// converted property getter: - (int)msgType;	// 0x3a0575
// converted property getter: - (BOOL)secureText;	// 0x3a0601
// converted property getter: - (unsigned long long)sessionID;	// 0x3a05b5
// converted property setter: - (void)setKeyboardType:(int)type;	// 0x3a05a5
// converted property setter: - (void)setMsgType:(int)type;	// 0x3a0585
// converted property setter: - (void)setSecureText:(BOOL)text;	// 0x3a0611
// converted property setter: - (void)setSessionID:(unsigned long long)anId;	// 0x3a05cd
// converted property setter: - (void)setString:(id)string;	// 0x3a04a1
// converted property setter: - (void)setSubText:(id)text;	// 0x3a0539
// converted property setter: - (void)setTitle:(id)title;	// 0x3a04ed
// converted property setter: - (void)setVersion:(unsigned)version;	// 0x3a05f1
// converted property getter: - (id)string;	// 0x3a0491
// converted property getter: - (id)subText;	// 0x3a0529
// converted property getter: - (id)title;	// 0x3a04dd
// converted property getter: - (unsigned)version;	// 0x3a05e1
@end
