/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface StreamData : XXUnknownSuperclass {
	long long fileSize;	// 4 = 0x4
	NSString *fileID;	// 12 = 0xc
	long long creationTime;	// 16 = 0x10
	long long preroll;	// 24 = 0x18
	long long duration;	// 32 = 0x20
	long long wrapInterval;	// 40 = 0x28
	int alignmentOffset;	// 48 = 0x30
	long long toolsVersion;	// 52 = 0x34
}
- (id)initWithBuffer:(id)buffer;	// 0x49f7d9
- (void)dealloc;	// 0x49fa59
- (int)getAlignmentOffset;	// 0x49fa31
- (long long)getCreationTime;	// 0x49f9d1
- (long long)getDuration;	// 0x49fa01
- (id)getFileID;	// 0x49f9c1
- (int)getFileSize;	// 0x49f9b1
- (long long)getPreroll;	// 0x49f9e9
- (long long)getToolsVersion;	// 0x49fa41
- (long long)getWrapInterval;	// 0x49fa19
@end

