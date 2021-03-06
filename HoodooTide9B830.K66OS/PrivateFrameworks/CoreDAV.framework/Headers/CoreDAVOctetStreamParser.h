/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVResponseBodyParser.h"
#import <NSObject.h> // Unknown library

@class NSMutableData, NSError;

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser> {
	NSMutableData *_octetStreamData;	// 4 = 0x4
	NSError *_parserError;	// 8 = 0x8
}
@property(retain) NSMutableData *octetStreamData;	// G=0x35dd5fb5; S=0x35dd5fc9; @synthesize=_octetStreamData
@property(readonly, assign) NSError *parserError;	// G=0x35dd5f7d; 
- (id)init;	// 0x35dd5e4d
- (void)dealloc;	// 0x35dd5ec1
- (id)description;	// 0x35dd5f21
// declared property getter: - (id)octetStreamData;	// 0x35dd5fb5
// declared property getter: - (id)parserError;	// 0x35dd5f7d
- (BOOL)processData:(id)data forTask:(id)task;	// 0x35dd5f4d
// declared property setter: - (void)setOctetStreamData:(id)data;	// 0x35dd5fc9
@end

