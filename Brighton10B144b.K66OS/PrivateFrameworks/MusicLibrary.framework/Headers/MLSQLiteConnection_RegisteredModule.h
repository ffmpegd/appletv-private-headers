/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSString;

@interface MLSQLiteConnection_RegisteredModule : NSObject {
	const sqlite3_module *_moduleMethods;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	void *_context;	// 12 = 0xc
	id _contextReleaseBlock;	// 16 = 0x10
}
@property(assign, nonatomic) void *context;	// G=0x346fe691; S=0x346fe6a1; @synthesize=_context
@property(copy, nonatomic) id contextReleaseBlock;	// G=0x346fe649; S=0x346fe65d; @synthesize=_contextReleaseBlock
@property(copy, nonatomic) NSString *name;	// G=0x346fe66d; S=0x346fe681; @synthesize=_name
- (void).cxx_destruct;	// 0x346fe6b1
// declared property getter: - (void *)context;	// 0x346fe691
// declared property getter: - (id)contextReleaseBlock;	// 0x346fe649
// declared property getter: - (id)name;	// 0x346fe66d
- (void)registerOnConnection:(id)connection;	// 0x346fe5d9
// declared property setter: - (void)setContext:(void *)context;	// 0x346fe6a1
// declared property setter: - (void)setContextReleaseBlock:(id)block;	// 0x346fe65d
// declared property setter: - (void)setName:(id)name;	// 0x346fe681
@end

