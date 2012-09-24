/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUHeader.h"

@class NSMutableArray, NSString;

@interface VMUArchiveHeader : VMUHeader {
	NSMutableArray *_headers;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *headers;	// G=0x36dc39e9; converted property
+ (id)archiveHeaderWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x36dc3579
- (id)initWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x36dc35cd
- (id)architecture;	// 0x36dc39f9
- (void)dealloc;	// 0x36dc396d
- (id)description;	// 0x36dc3aa9
// converted property getter: - (id)headers;	// 0x36dc39e9
- (BOOL)isArchive;	// 0x36dc39e5
@end
