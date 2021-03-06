/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQPProcessor.h"
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQPSLProcessor : GQPProcessor {
@private
	Class mGenerator;	// 48 = 0x30
}
- (id)initWithPath:(id)path indexFileName:(id)name outputType:(int)type outputPath:(CFStringRef)path4 previewRequest:(QLPreviewRequestRef)request progressiveHelper:(id)helper generator:(Class)generator;	// 0x359ae231
- (id)initWithZipArchive:(id)zipArchive indexFileName:(id)name outputType:(int)type outputPath:(CFStringRef)path previewRequest:(QLPreviewRequestRef)request progressiveHelper:(id)helper generator:(Class)generator;	// 0x359aded9
- (Class)generator;	// 0x359ad251
- (BOOL)go;	// 0x359ae03d
- (void)pushInitialState;	// 0x359ae159
@end

