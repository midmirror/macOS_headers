//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TMAStrokeBasicInspectorPaneControllerAccessibility_super.h"

@class NSArray, NSColorWell, NSStepper, NSTextField, TSNSPopUpButtonAccessibility;

@interface TMAStrokeBasicInspectorPaneControllerAccessibility : __TMAStrokeBasicInspectorPaneControllerAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
- (void)_tsaxNameLineEndTypes;
- (void)_tsaxNameStrokeTypes;
- (void)_tsaxNameBasicControls;
- (void)_tsaxSetupBasicStrokeAccessibility;
@property(readonly, nonatomic) BOOL _tsaxSelectionSupportsLineEnds;
@property(readonly, nonatomic) NSColorWell *_tsaxColorChooser;
@property(readonly, nonatomic) NSStepper *_tsaxStrokeWidthStepper;
@property(readonly, nonatomic) NSTextField *_tsaxStrokeWidthTextbox;
@property(readonly, nonatomic) TSNSPopUpButtonAccessibility *_tsaxLineTypePopupButton;
@property(readonly, nonatomic) NSArray *_tsaxStrokes;
@property(readonly, nonatomic) NSArray *_tsaxStrokePatternDescriptions;
@property(readonly, nonatomic) NSArray *_tsaxEndpointDescriptions;
- (id)_tsaxRightEndpointPopupButton;
- (id)_tsaxLeftEndpointPopupButton;
- (void)tsaxLoadAccessibilityInformation;
- (void)p_setupLineEndMenuItems;
- (void)updateMenuItems;

@end

