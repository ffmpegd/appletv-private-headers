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
@property(readonly, retain) NSMutableArray *headers;	// G=0x30167465; converted property
+ (id)archiveHeaderWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x301675f5
- (id)initWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x30167641
- (id)architecture;	// 0x301674d9
- (void)dealloc;	// 0x30167581
- (id)description;	// 0x30167475
// converted property getter: - (id)headers;	// 0x30167465
- (BOOL)isArchive;	// 0x30167461
@end

