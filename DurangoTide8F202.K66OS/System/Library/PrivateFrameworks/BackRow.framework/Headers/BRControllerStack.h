/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRControl.h"

@class NSMutableArray;

@interface BRControllerStack : BRControl {
@private
	NSMutableArray *_stack;	// 44 = 0x2c
	NSMutableArray *_transactions;	// 48 = 0x30
	NSMutableArray *_currentStackPath;	// 52 = 0x34
	BOOL _processingTransactions;	// 56 = 0x38
	BOOL _dumpStack;	// 57 = 0x39
}
- (id)init;	// 0x3289d691
- (void)_addTransaction:(id)transaction;	// 0x3289e455
- (id)_checkSubstitutions:(id)substitutions;	// 0x328cfdd9
- (void)_databaseObjectModified:(id)modified;	// 0x328b0509
- (void)_performDepthLimitedCullingForController:(id)controller;	// 0x328d0075
- (void)_processPopToClassTransaction:(id)classTransaction;	// 0x328d0361
- (void)_processPopToLabelTransaction:(id)labelTransaction;	// 0x328d02a1
- (void)_processPopToTransaction:(id)transaction;	// 0x328d0431
- (void)_processPopTransaction:(id)transaction;	// 0x328b615d
- (void)_processPushTransaction:(id)transaction;	// 0x3289e495
- (void)_processRemoveTransaction:(id)transaction;	// 0x328c7bf9
- (void)_processReplaceAllTransaction:(id)transaction;	// 0x328aa719
- (void)_processReplaceControllersAboveLabelTransaction:(id)transaction;	// 0x328d00f9
- (void)_processSwapTransaction:(id)transaction;	// 0x328b543d
- (void)_processTransactions;	// 0x328d102d
- (void)_refreshControllersNotification:(id)notification;	// 0x328aaf2d
- (void)_setContent:(id)content direction:(int)direction oldTransition:(id)transition;	// 0x328d0b1d
- (void)_updateControllerValidity:(id)validity;	// 0x328cff11
- (void)_updateControllersOnlyLegacy:(BOOL)legacy;	// 0x328cff29
- (void)_updateStackPathForPoppingController:(id)poppingController;	// 0x328aa8e1
- (void)_updateStackPathForPushingController:(id)pushingController;	// 0x3289e585
- (id)accessibilityLabel;	// 0x328d05ed
- (BOOL)brEventAction:(id)action;	// 0x328b18f5
- (id)controllers;	// 0x328d07c9
- (id)controllersLabeled:(id)labeled;	// 0x328d06fd
- (id)controllersOfClass:(Class)aClass;	// 0x328d0631
- (int)count;	// 0x328d0611
- (void)dealloc;	// 0x328d09e9
- (void)layoutSubcontrols;	// 0x328d0fa1
- (id)peekController;	// 0x328acb59
- (void)popController;	// 0x328b6109
- (void)popToController:(id)controller;	// 0x328d097d
- (void)popToControllerOfClass:(Class)aClass;	// 0x328d08f5
- (void)popToControllerWithLabel:(id)label;	// 0x328d0889
- (void)pushController:(id)controller;	// 0x3289e3bd
- (void)removeController:(id)controller;	// 0x328c7b8d
- (void)replaceAllControllersWithController:(id)controller;	// 0x328a21ad
- (void)replaceControllersAboveLabel:(id)label withController:(id)controller;	// 0x328d07f5
- (id)rootController;	// 0x328acbd9
- (id)stackPathForController:(id)controller;	// 0x328bfd2d
- (void)swapController:(id)controller;	// 0x328b53a5
@end

