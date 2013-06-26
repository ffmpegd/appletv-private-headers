/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import </libobjc.A.h>

@class ML3DatabaseConnection, NSThread;

@interface _ML3DatabaseConnectionWrapper : NSObject {
	ML3DatabaseConnection *_connection;	// 4 = 0x4
	NSThread *_owningThread;	// 8 = 0x8
	unsigned _useCount;	// 12 = 0xc
}
@property(retain, nonatomic) ML3DatabaseConnection *connection;	// G=0x315a5da5; S=0x315a5db5; @synthesize=_connection
@property(retain, nonatomic) NSThread *owningThread;	// G=0x315a5ddd; S=0x315a5ded; @synthesize=_owningThread
@property(assign, nonatomic) unsigned useCount;	// G=0x315a5e15; S=0x315a5e25; @synthesize=_useCount
- (id)initWithConnection:(id)connection;	// 0x315a5c6d
- (void).cxx_destruct;	// 0x315a5e35
// declared property getter: - (id)connection;	// 0x315a5da5
- (id)description;	// 0x315a5cf1
// declared property getter: - (id)owningThread;	// 0x315a5ddd
// declared property setter: - (void)setConnection:(id)connection;	// 0x315a5db5
// declared property setter: - (void)setOwningThread:(id)thread;	// 0x315a5ded
// declared property setter: - (void)setUseCount:(unsigned)count;	// 0x315a5e25
// declared property getter: - (unsigned)useCount;	// 0x315a5e15
@end
