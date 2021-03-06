//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class BPTimedDispatch, NSArray, NSTextField;

@interface BPSelectedFormulaViewController : NSViewController
{
    NSArray *_formulae;
    id <BPSelectedFormulaViewControllerDelegate> _delegate;
    NSTextField *_formulaDescriptionLabel;
    NSTextField *_formulaPathLabel;
    NSTextField *_formulaVersionLabel;
    NSTextField *_formulaDependenciesLabel;
    NSTextField *_formulaConflictsLabel;
    BPTimedDispatch *_timedDispatch;
}

@property(retain) BPTimedDispatch *timedDispatch; // @synthesize timedDispatch=_timedDispatch;
@property __weak NSTextField *formulaConflictsLabel; // @synthesize formulaConflictsLabel=_formulaConflictsLabel;
@property __weak NSTextField *formulaDependenciesLabel; // @synthesize formulaDependenciesLabel=_formulaDependenciesLabel;
@property __weak NSTextField *formulaVersionLabel; // @synthesize formulaVersionLabel=_formulaVersionLabel;
@property __weak NSTextField *formulaPathLabel; // @synthesize formulaPathLabel=_formulaPathLabel;
@property __weak NSTextField *formulaDescriptionLabel; // @synthesize formulaDescriptionLabel=_formulaDescriptionLabel;
@property __weak id <BPSelectedFormulaViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *formulae; // @synthesize formulae=_formulae;
- (void).cxx_destruct;
- (void)displayInformationForFormulae;
- (void)updateFormulaInformation:(id)arg1;
- (id)nibName;
- (void)updatePreferedWidth:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

