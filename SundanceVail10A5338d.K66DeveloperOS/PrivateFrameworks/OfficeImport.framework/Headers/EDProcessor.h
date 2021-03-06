/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources, EDWorkbook, NSMutableArray;

@interface EDProcessor : NSObject {
	EDWorkbook *mWorkbook;	// 4 = 0x4
	EDResources *mResources;	// 8 = 0x8
	NSMutableArray *mObjects;	// 12 = 0xc
}
- (id)initWithWorkbook:(id)workbook;	// 0x339e744d
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x33b80b8d
- (void)applyProcessorWithSheet:(id)sheet;	// 0x33a0b341
- (void)dealloc;	// 0x33a0c4f1
- (bool)isObjectSupported:(id)supported;	// 0x33b80b89
- (void)markObjectForPostProcessing:(id)postProcessing;	// 0x339f5179
@end

