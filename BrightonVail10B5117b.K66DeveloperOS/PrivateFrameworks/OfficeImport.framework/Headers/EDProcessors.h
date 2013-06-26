/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDWorkbook, NSMutableArray;

@interface EDProcessors : NSObject {
	EDWorkbook *mWorkbook;	// 4 = 0x4
	NSMutableArray *mProcessors;	// 8 = 0x8
}
- (id)initWithWorkbook:(id)workbook;	// 0x34a6ebc1
- (void)addProcessorClass:(Class)aClass;	// 0x34a6ed45
- (void)applyProcessorsWithSheet:(id)sheet;	// 0x34a92b6d
- (void)dealloc;	// 0x34a9d8a9
- (bool)hasProcessors;	// 0x34c08561
- (void)markObject:(id)object processor:(Class)processor;	// 0x34a7c9e1
- (void)removeAllObjects;	// 0x34a6ed25
- (void)removeProcessorClass:(Class)aClass;	// 0x34c0858d
@end
