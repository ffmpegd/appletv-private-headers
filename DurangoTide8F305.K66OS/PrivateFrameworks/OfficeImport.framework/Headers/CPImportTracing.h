/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CPTracing.h"


__attribute__((visibility("hidden")))
@interface CPImportTracing : CPTracing {
@private
	long mReadingOpstat;	// 8 = 0x8
	long mProcessorOpstat;	// 12 = 0xc
	long mImportingOpstat;	// 16 = 0x10
}
- (id)initWithFilename:(id)filename;	// 0x3463f501
- (void)dealloc;	// 0x3463f4d5
- (void)startImporting;	// 0x3463f5e5
- (void)startProcessors;	// 0x3463f62d
- (void)startReading;	// 0x3463f675
- (void)stopImporting;	// 0x3463f5c1
- (void)stopProcessors;	// 0x3463f609
- (void)stopReading;	// 0x3463f651
@end
