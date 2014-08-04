//
//  CSDetailViewController.h
//  Presidents
//
//  Created by Data Department on 2014-07-31.
//  Copyright (c) 2014 Mithunan Ravendren. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CSDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (weak, nonatomic) IBOutlet UIWebView *webView;

@property (strong, nonatomic) UIBarButtonItem *languageButton;
@property (strong, nonatomic) UIPopoverController *languagePopoverController;
@property (copy, nonatomic) NSString *languageString;

- (IBAction)toggleLanguagePopover;

@end
