//
//  CKAddSpaceObjectViewController.h
//  Out of this World
//
//  Created by Devin Medeiros on 4/23/14.
//  Copyright (c) 2014 Cutie Killer Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CKSpaceObject.h"

@protocol CKAddSpaceObjectViewControllerDelegate <NSObject>

@required

-(void)addSpaceObject:(CKSpaceObject *)spaceObject;
-(void)didCancel;

@end

@interface CKAddSpaceObjectViewController : UIViewController

@property (weak, nonatomic) id <CKAddSpaceObjectViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITextField *nameTextField;
@property (strong, nonatomic) IBOutlet UITextField *nicknameTextField;
@property (strong, nonatomic) IBOutlet UITextField *diamterTextField;
@property (strong, nonatomic) IBOutlet UITextField *temperatureTextField;
@property (strong, nonatomic) IBOutlet UITextField *numberOfMoonsTextField;
@property (strong, nonatomic) IBOutlet UITextField *interestingFactTextField;

- (IBAction)cancelButtonPressed:(UIButton *)sender;
- (IBAction)addButtonPressed:(UIButton *)sender;

@end
