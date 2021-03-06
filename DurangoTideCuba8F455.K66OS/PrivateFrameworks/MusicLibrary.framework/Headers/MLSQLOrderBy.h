/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MLSQLCode.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MLSQLOrderBy : MLSQLCode {
@private
	NSString *_indexCharSelectionString;	// 48 = 0x30
	NSString *_displayColumnName;	// 52 = 0x34
	BOOL _descending;	// 56 = 0x38
}
@property(assign, nonatomic) BOOL descending;	// G=0x31bd6e69; S=0x31bd6e79; @synthesize=_descending
@property(readonly, retain) NSString *displayColumnName;	// G=0x31bd6e59; converted property
@property(readonly, retain) NSString *indexCharSelectionString;	// G=0x31bd6e49; converted property
+ (id)expressionToken;	// 0x31bd6e3d
- (id)initWithOrderColumnsString:(id)orderColumnsString indexCharSelectionString:(id)string displayColumnName:(id)name;	// 0x31bd7c6d
- (id)_text;	// 0x31bd7be1
- (void)dealloc;	// 0x31bd7b85
// declared property getter: - (BOOL)descending;	// 0x31bd6e69
// converted property getter: - (id)displayColumnName;	// 0x31bd6e59
// converted property getter: - (id)indexCharSelectionString;	// 0x31bd6e49
- (id)orderColumnsString;	// 0x31bd7c41
// declared property setter: - (void)setDescending:(BOOL)descending;	// 0x31bd6e79
@end

