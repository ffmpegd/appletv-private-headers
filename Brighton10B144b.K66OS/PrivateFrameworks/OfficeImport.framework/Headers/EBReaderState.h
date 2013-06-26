/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EBState.h"

@class OABReaderState, ECColumnWidthConvertor;

@interface EBReaderState : EBState {
	XlBinaryReader *mXlReader;	// 36 = 0x24
	XlSheetInfoTable *mXlSheetInfoTable;	// 40 = 0x28
	ECColumnWidthConvertor *mColumnWidthConvertor;	// 44 = 0x2c
	unsigned mTotalCellsWithContentCount;	// 48 = 0x30
	unsigned mTotalCellsWithFormulaCount;	// 52 = 0x34
	XlEshObjectFactory *mXlEshObjectFactory;	// 56 = 0x38
	OABReaderState *mOAState;	// 60 = 0x3c
	BOOL mImportCSV;	// 64 = 0x40
}
@property(assign, nonatomic) BOOL importCSV;	// G=0x34a0bd5d; S=0x34a0bd6d; @synthesize=mImportCSV
- (id)initWithXlReader:(XlBinaryReader *)xlReader cancelDelegate:(id)delegate tracing:(id)tracing;	// 0x34890f59
- (unsigned)cellsWithContentCount;	// 0x34a0bd4d
- (id)columnWidthConvertor;	// 0x348c41b5
- (void)dealloc;	// 0x348b55b1
// declared property getter: - (BOOL)importCSV;	// 0x34a0bd5d
- (void)incrementCellsWithContentCount;	// 0x348ae529
- (void)incrementCellsWithFormulaCount;	// 0x348aefd5
- (id)oaState;	// 0x3489b239
- (void)pauseReading;	// 0x348a3965
- (void)readGlobalXlObjects;	// 0x3489b2d5
- (void)reportWarning:(CPTaggedMessageStructure *)warning;	// 0x349a2659
- (void)resumeReading;	// 0x348a487d
// declared property setter: - (void)setImportCSV:(BOOL)csv;	// 0x34a0bd6d
- (XlBinaryReader *)xlReader;	// 0x348930f9
- (XlSheetInfoTable *)xlSheetInfoTable;	// 0x348a319d
@end
