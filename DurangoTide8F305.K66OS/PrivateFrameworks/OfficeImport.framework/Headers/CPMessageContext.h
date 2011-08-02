/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CPMessageContext : NSObject {
@private
	NSMutableSet *m_warnings;	// 4 = 0x4
	NSMutableSet *m_errors;	// 8 = 0x8
	NSMutableArray *m_currentObjectStack;	// 12 = 0xc
	NSMutableDictionary *m_placeholderToObjectIdMap;	// 16 = 0x10
}
+ (void)createContextForCurrentThread;	// 0x3463d1fd
+ (id)currentObjectOrPlaceholder;	// 0x344d8fe1
+ (id)errorsUsingName:(id)name;	// 0x3463c5b9
+ (id)getErrorArray;	// 0x3463d0c9
+ (id)getWarningArray;	// 0x3463d141
+ (void)initialize;	// 0x3456dc75
+ (BOOL)isFileStructuredStorage;	// 0x3463c5a5
+ (void)popCurrentObject;	// 0x3463cf7d
+ (void)popCurrentPlaceholder:(id)placeholder;	// 0x3463cdf5
+ (void)pushCurrentObject:(id)object;	// 0x3463d045
+ (id)pushCurrentPlaceholder;	// 0x3463ced1
+ (void)removeContextForCurrentThread;	// 0x3463d1b9
+ (void)replacePlaceholdersWithObjects;	// 0x3463cbf1
+ (void)reportError:(CPTaggedMessageStructure *)error;	// 0x3463d901
+ (void)reportErrorException:(id)exception;	// 0x3463d27d
+ (void)reportObject:(id)object withWarning:(CPTaggedMessageStructure *)warning;	// 0x3463d9bd
+ (void)reportObjectOrPlaceholder:(id)placeholder withWarning:(CPTaggedMessageStructure *)warning parameters:(void *)parameters;	// 0x344d90e1
+ (void)reportWarning:(CPTaggedMessageStructure *)warning;	// 0x344d8f5d
+ (void)reportWarningException:(id)exception;	// 0x34576a19
+ (void)restoreObjectStack:(unsigned)stack;	// 0x3463ca8d
+ (unsigned)saveObjectStack;	// 0x3463cb91
+ (void)setIsFileStructuredStorage:(BOOL)storage;	// 0x344ffa31
+ (void)setObject:(id)object forPlaceholder:(id)placeholder;	// 0x3463c5b5
+ (id)warningsUsingName:(id)name;	// 0x3463c5bd
- (id)init;	// 0x3463d4d1
- (void)dealloc;	// 0x3463d451
@end
