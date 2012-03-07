/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMState.h"

@class EDSheet, EDWorkbook;

__attribute__((visibility("hidden")))
@interface EMState : CMState {
@private
	EDWorkbook *_workbook;	// 40 = 0x28
	EDSheet *_currentSheet;	// 44 = 0x2c
}
@property(assign) EDSheet *currentSheet;	// G=0x355dba1d; S=0x355d8a61; @synthesize=_currentSheet
@property(retain) EDWorkbook *workbook;	// G=0x355d9ce1; S=0x355c8835; @synthesize=_workbook
// declared property getter: - (id)currentSheet;	// 0x355dba1d
- (void)dealloc;	// 0x355f1e9d
// declared property setter: - (void)setCurrentSheet:(id)sheet;	// 0x355d8a61
// declared property setter: - (void)setWorkbook:(id)workbook;	// 0x355c8835
// declared property getter: - (id)workbook;	// 0x355d9ce1
@end

