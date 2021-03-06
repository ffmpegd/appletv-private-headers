/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVOctetStreamParser.h"

@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser {
	NSFileHandle *_fileHandle;	// 12 = 0xc
}
@property(retain) NSFileHandle *fileHandle;	// G=0x303ce125; S=0x303ce139; @synthesize=_fileHandle
- (id)initWithFileHandle:(id)fileHandle;	// 0x303ce061
- (void)dealloc;	// 0x303ce0a9
// declared property getter: - (id)fileHandle;	// 0x303ce125
- (BOOL)processData:(id)data forTask:(id)task;	// 0x303ce0f5
// declared property setter: - (void)setFileHandle:(id)handle;	// 0x303ce139
@end

