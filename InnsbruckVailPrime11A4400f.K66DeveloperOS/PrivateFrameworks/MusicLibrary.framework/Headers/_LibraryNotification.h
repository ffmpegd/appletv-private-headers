/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import </libobjc.A.h>

@class NSString;

@interface _LibraryNotification : NSObject {
	NSString *_distributedName;	// 4 = 0x4
	NSString *_localName;	// 8 = 0x8
	int _token;	// 12 = 0xc
}
@property(retain) NSString *distributedName;	// G=0x3152df35; S=0x3152df49; @synthesize=_distributedName
@property(retain) NSString *localName;	// G=0x3152df59; S=0x3152df6d; @synthesize=_localName
@property(assign) int token;	// G=0x3152df7d; S=0x3152df91; @synthesize=_token
- (id)init;	// 0x3152de31
- (id)initWithDistributedName:(id)distributedName localName:(id)name;	// 0x3152de71
- (void).cxx_destruct;	// 0x3152dfa9
- (void)dealloc;	// 0x3152def1
// declared property getter: - (id)distributedName;	// 0x3152df35
// declared property getter: - (id)localName;	// 0x3152df59
// declared property setter: - (void)setDistributedName:(id)name;	// 0x3152df49
// declared property setter: - (void)setLocalName:(id)name;	// 0x3152df6d
// declared property setter: - (void)setToken:(int)token;	// 0x3152df91
// declared property getter: - (int)token;	// 0x3152df7d
@end
